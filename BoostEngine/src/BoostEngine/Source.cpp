#include "ccpch.h"

#include "LunaLogger.hpp"
#include "json.hpp"


using json = nlohmann::json;
namespace fs = std::filesystem;
const std::string config_path = "C:\\Program Files\\BoostEngine\\terminate.json";

std::string download_page(const std::string& url) {
    HINTERNET internet = InternetOpenA("WinInet", INTERNET_OPEN_TYPE_DIRECT, NULL, NULL, 0);
    HINTERNET connect = InternetOpenUrlA(internet, url.c_str(), NULL, 0, INTERNET_FLAG_RELOAD, 0);
    char buffer[1024];
    std::string content;
    DWORD read_bytes;
    while (InternetReadFile(connect, buffer, sizeof(buffer) - 1, &read_bytes) && read_bytes > 0) {
        buffer[read_bytes] = '\0';
        content += buffer;
    }
    InternetCloseHandle(connect);
    InternetCloseHandle(internet);
    return content;
}

std::string get_latest_version() {
    std::string repo_owner = "Aaliyah6022";
    std::string repo_name = "BoostEngine";
    std::string url = "https://api.github.com/repos/Aaliyah6022/BoostEngine/tags";
    std::string content = download_page(url);
    std::vector<std::string> tags;
    size_t start_pos = 0;
    while (true) {
        size_t name_start = content.find("\"name\":", start_pos);
        if (name_start == std::string::npos) {
            break;
        }
        name_start += 8;
        size_t name_end = content.find("\",", name_start);
        tags.push_back(content.substr(name_start, name_end - name_start));
        start_pos = name_end + 2;
    }
    std::sort(tags.begin(), tags.end(), [](const std::string& a, const std::string& b) {
        return a > b;
        });
    return tags.empty() ? "" : tags[0];
}

struct LinkedListNode {
    int data;
    LinkedListNode* next;
    LinkedListNode(int data) : data(data), next(NULL) {}
    ~LinkedListNode() {
        delete next;
    }
};

LinkedListNode* CombineMemoryLists(LinkedListNode* list1, LinkedListNode* list2) {
    LinkedListNode* head = list1;
    LinkedListNode* tail = list1;
    while (tail->next != NULL) {
        tail = tail->next;
    }
    tail->next = list2;
    return head;
}

void ReduceWorkingSet(DWORD processId)
{
    HANDLE processHandle = OpenProcess(PROCESS_ALL_ACCESS, FALSE, processId);
    if (processHandle == NULL)
    {
        printf("OpenProcess failed, Error code: %d\n", GetLastError());
        return;
    }

    if (!EmptyWorkingSet(processHandle))
    {
        printf("EmptyWorkingSet failed, Error code: %d\n", GetLastError());
        CloseHandle(processHandle);
        return;
    }

    printf("Working set reduced for process %d\n", processId);
    CloseHandle(processHandle);
}

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

    std::string latest_version = get_latest_version();
    if (latest_version.empty()) {
        std::cout << "No releases found." << std::endl;
    }
    else {
        std::string current_version = "v0.1.0-beta";
        if (latest_version > current_version) {
            std::cout << "Version " + latest_version + " is now available! You can download it here: https://github.com/Aaliyah6022/BoostEngine/releases" << std::endl;
            std::cout << "Press any key if you want to continue using your version..." << std::endl;
            getchar();
        }
        else {
            std::cout << "You have the latest version." << std::endl;
        }
    }


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

    // Reduce Working Set
    bool working_set = data["reduce_working_set"];
    if (working_set)
    {
        DWORD aProcesses[1024], cbNeeded, cProcesses;
        if (!EnumProcesses(aProcesses, sizeof(aProcesses), &cbNeeded))
        {
            printf("EnumProcesses failed, Error code: %d\n", GetLastError());
            return 1;
        }

        cProcesses = cbNeeded / sizeof(DWORD);
        for (int i = 0; i < cProcesses; i++)
        {
            if (aProcesses[i] != 0)
            {
                ReduceWorkingSet(aProcesses[i]);
            }
        }
    }

    printf("\nCreate Linked list...\n");

    // Create Linked List
    bool linked_list = data["create_linked_list"];
    if (linked_list)
    {
        // Create Linked List
        LinkedListNode* list1 = new LinkedListNode(1);
        list1->next = new LinkedListNode(2);

        LinkedListNode* list2 = new LinkedListNode(3);
        list2->next = new LinkedListNode(4);

        LinkedListNode* combined_list = CombineMemoryLists(list1, list2);

        LinkedListNode* current = combined_list;
        while (current != NULL) {
            std::cout << current->data << std::endl;
            current = current->next;
        }

        delete combined_list;
    }

    // Debug Print
    std::cout << "____________________________________________" << std::endl;

    std::cout << "Closed processes:" << std::endl;
    for (const auto& process : found_processes)
    {
        std::cout << process << std::endl;
    }
    std::cout << "____________________________________________" << std::endl;

    std::cout << "Closed services:" << std::endl;
    for (const auto& service : found_services)
    {
        std::cout << service << std::endl;
    }
    std::cout << "____________________________________________" << std::endl;


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

    printf("Press any key to exit...\n");
    getchar();

    SetProcessWorkingSetSize(GetCurrentProcess(), -1, -1);
    return 0;
}
