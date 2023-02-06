#include "ccpch.h"

#include "LunaLogger.hpp"
#include "json.hpp"


using json = nlohmann::json;
namespace fs = std::filesystem;
const std::string config_path = "C:\\Program Files\\BoostEngine\\terminate.json";

int main()
{
    std::ifstream file(config_path);
	json data;

    if (file.is_open())
    {
        file >> data;
        LunaLogger::log(LogLevel::Info, std::string(__FILE__), __LINE__, "BoostEngine config found!");
    }
#pragma warning(push)
#pragma warning(disable:4129 4101)
    else
    {
        LunaLogger::log(LogLevel::Warning, std::string(__FILE__), __LINE__, "BoostEngine config not found! Downloading newest config from Github...");

        if (!fs::exists("C:\\Program Files\\BoostEngine"))
        {
            if (!fs::create_directory("C:\\Program Files\\BoostEngine"))
            {
                LunaLogger::log(LogLevel::Error, std::string(__FILE__), __LINE__, "Error creating directory: C:\Program Files\BoostEngine");
                return 1;
            }
            LunaLogger::log(LogLevel::Warning, std::string(__FILE__), __LINE__, "New folder created: C:\Program Files\BoostEngine");
        }

        HINTERNET hIntSession = InternetOpenA("Wininet Example/1.0", INTERNET_OPEN_TYPE_DIRECT, NULL, NULL, 0);
        if (hIntSession == NULL)
        {
            LunaLogger::log(LogLevel::Error, std::string(__FILE__), __LINE__, "Error opening Internet session");
            return 1;
        }
        HINTERNET hHttpSession = InternetOpenUrlA(hIntSession, "https://raw.githubusercontent.com/Aaliyah6022/BoostEngine/main/Config/terminate.json", NULL, 0, INTERNET_FLAG_RELOAD, 0);
        if (hHttpSession == NULL)
        {
            LunaLogger::log(LogLevel::Error, std::string(__FILE__), __LINE__, "Error opening URL");
            InternetCloseHandle(hIntSession);
            return 1;
        }
        std::vector<char> buffer(4096);
        std::ostringstream os;
        DWORD bytesRead;
        do
        {
            if (!InternetReadFile(hHttpSession, &buffer[0], static_cast<DWORD>(buffer.size()), &bytesRead))
            {
                LunaLogger::log(LogLevel::Error, std::string(__FILE__), __LINE__, "Error reading data");
                InternetCloseHandle(hHttpSession);
                InternetCloseHandle(hIntSession);
                return 1;
            }
            if (bytesRead == 0)
                break;
            os.write(&buffer[0], bytesRead);
        } while (true);
        InternetCloseHandle(hHttpSession);
        InternetCloseHandle(hIntSession);
        std::istringstream is(os.str());
        std::ofstream f("C:\\Program Files\\BoostEngine\\terminate.json");
        if (!f.is_open())
        {
            LunaLogger::log(LogLevel::Error, std::string(__FILE__), __LINE__, "Error opening file for writing");
            return 1;
        }
        f << is.rdbuf();

        LunaLogger::log(LogLevel::Warning, std::string(__FILE__), __LINE__, "Config file successfully downloaded. Please close and run the program again");
        return 0;
    }
#pragma warning(pop)


    std::vector<std::string> found_processes;
    std::vector<std::string> not_found_processes;

    std::vector<std::string> found_services;
    std::vector<std::string> not_found_services;

    // Processes
    for (const auto& process : data["processes"])
    {
        std::string process_name = process;
        std::string process_full_name = process_name + ".exe";
        HANDLE hProcess = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);
        if (hProcess == INVALID_HANDLE_VALUE)
        {
            LunaLogger::log(LogLevel::Error, std::string(__FILE__), __LINE__, "Could not create toolhelp snapshot");
            continue;
        }

        PROCESSENTRY32 pe = { 0 };
        pe.dwSize = sizeof(PROCESSENTRY32);
        if (!Process32First(hProcess, &pe))
        {
            LunaLogger::log(LogLevel::Error, std::string(__FILE__), __LINE__, "Could not retrieve first process");
            CloseHandle(hProcess);
            continue;
        }

        bool found = false;
        do
        {
            if (!_stricmp(pe.szExeFile, process_full_name.c_str()))
            {
                found = true;
                HANDLE hProcess = OpenProcess(PROCESS_TERMINATE, FALSE, pe.th32ProcessID);
                if (hProcess)
                {
                    TerminateProcess(hProcess, 0);
                    CloseHandle(hProcess);
                }
                else
                {
                    LunaLogger::log(LogLevel::Error, std::string(__FILE__), __LINE__, "Could not open process");
                }
            }
        } while (Process32Next(hProcess, &pe));

        CloseHandle(hProcess);

        if (found)
        {
            found_processes.push_back(process_full_name);
        }
        else
        {
            not_found_processes.push_back(process_full_name);
        } 
    }

    // Services
    for (const auto& service : data["services"])
    {
        std::string service_name = service;
        SC_HANDLE hSCManager = OpenSCManager(NULL, NULL, SC_MANAGER_ALL_ACCESS);
        if (hSCManager == NULL)
        {
            LunaLogger::log(LogLevel::Error, std::string(__FILE__), __LINE__, "Could not open Service Control Manager");
            continue;
        }

        SC_HANDLE hService = OpenService(hSCManager, service_name.c_str(), SERVICE_STOP | SERVICE_QUERY_STATUS);
        if (hService == NULL)
        {
            LunaLogger::log(LogLevel::Error, std::string(__FILE__), __LINE__, "Could not open service");
            CloseServiceHandle(hSCManager);
            continue;
        }

        SERVICE_STATUS_PROCESS ssStatus;
        DWORD dwBytesNeeded;
        if (!QueryServiceStatusEx(hService, SC_STATUS_PROCESS_INFO, (LPBYTE)&ssStatus, sizeof(SERVICE_STATUS_PROCESS), &dwBytesNeeded))
        {
            LunaLogger::log(LogLevel::Error, std::string(__FILE__), __LINE__, "Could not query service status");

            CloseServiceHandle(hService);
            CloseServiceHandle(hSCManager);
            continue;
        }

        if (ssStatus.dwCurrentState == SERVICE_STOPPED)
        {
            not_found_services.push_back(service_name);
            CloseServiceHandle(hService);
            CloseServiceHandle(hSCManager);
            continue;
        }

        SERVICE_STATUS ss;
        if (!ControlService(hService, SERVICE_CONTROL_STOP, &ss))
        {
            LunaLogger::log(LogLevel::Error, std::string(__FILE__), __LINE__, "Could not control service");
            CloseServiceHandle(hService);
            CloseServiceHandle(hSCManager);
            continue;
        }

        found_services.push_back(service_name);
        CloseServiceHandle(hService);
        CloseServiceHandle(hSCManager);
    }

    // Directories
    for (const auto& directory : data["directories"])
    {
        std::string directory_name = directory;
        try
        {
            fs::remove_all(directory_name);
        }
        catch (const std::exception& e)
        {
            //std::cerr << "Error deleting directory " << directory_name << ": " << e.what() << '\n';
            LunaLogger::log(LogLevel::Error, std::string(__FILE__), __LINE__, "Error deleting director");
            (void)e;
        }
    }

    // Ultimate performance power plam
    bool ultimate_performance = data["enable_ultimate_performance"];
    if (ultimate_performance)
    {
        // only run once
        //system("powercfg -duplicatescheme e9a42b02-d5df-448d-aa00-03f14749eb61");
        system("powercfg.exe /setactive e9a42b02-d5df-448d-aa00-03f14749eb61");
    }

    // High performance power plan
    bool enable_high_performance = data["enable_high_performance"];
    if (enable_high_performance)
    {
        if (ultimate_performance == false)
        {
            LunaLogger::log(LogLevel::Info, std::string(__FILE__), __LINE__, "Succesfully switched to High performance power plan");
            DWORD result = PowerSetActiveScheme(0, &GUID_MIN_POWER_SAVINGS);
        }
    }

    // Debug Print
    std::cout << "____________________________________________" << std::endl;

    std::cout << "Closed processes:" << std::endl;
    for (const auto& process : found_processes)
    {
        std::cout << process << std::endl;
    }
    std::cout << "____________________________________________" << std::endl;

#if 0
    std::cout << "Not found processes:" << std::endl;
    for (const auto& process : not_found_processes)
    {
        std::cout << process << std::endl;
    }
    std::cout << "____________________________________________" << std::endl;
#endif

    std::cout << "Closed services:" << std::endl;
    for (const auto& service : found_services)
    {
        std::cout << service << std::endl;
    }
    std::cout << "____________________________________________" << std::endl;

#if 0
    std::cout << "Not found services:" << std::endl;
    for (const auto& service : not_found_services)
    {
        std::cout << service << std::endl;
    }
#endif

    std::cout << "Running disk cleanup...\n";
    system("cleanmgr.exe /sagerun:1");

    // Disable hibernation
    std::cout << "Disabling hibernation...\n";
    system("powercfg /hibernate off");

    // Clear windows event logs
    system("wevtutil.exe cl Application");
    system("wevtutil.exe cl Security");
    system("wevtutil.exe cl System");

    // Clear DNS cache
    system("ipconfig /flushdns");

    MessageBoxA(0, "BoostEngine finished!", "Success", 0);


    SetProcessWorkingSetSize(GetCurrentProcess(), -1, -1);
    return 0;
}
