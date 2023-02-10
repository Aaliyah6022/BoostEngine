import win32service
import win32serviceutil
import win32api

def main():
    with open("services.md", "w") as log_file:
        log_file.write("---\n")
        log_file.write("size: 16:9\n")
        log_file.write("marp: true\n")
        log_file.write("style: {\n")
        log_file.write("section {\n")
        log_file.write("    background-color: #369;\n")
        log_file.write("    color: #fff;\n")
        log_file.write("    font-size: 30px;\n")
        log_file.write("    padding: 40px;\n")
        log_file.write("}\n")

        log_file.write("h1,\n")
        log_file.write("h2 {\n")
        log_file.write("    text-align: center;\n")
        log_file.write("    margin: 0;\n")
        log_file.write("}\n")

        log_file.write("h1 {\n")
        log_file.write("    color: #8cf;\n")
        log_file.write("}\n")
        log_file.write("}\n")


        services = list(win32service.EnumServicesStatus(win32service.OpenSCManager(None, None, win32service.SC_MANAGER_ENUMERATE_SERVICE), win32service.SERVICE_WIN32))
        services.sort(key=lambda x: x[-2])
        for service in services:
            
            

            try:
                # Get the service name and display name
                service_name = service[0]
                display_name = str(service[-2])

                # Get the handle to the service
                hscm = win32service.OpenSCManager(None, None, win32service.SC_MANAGER_ALL_ACCESS)
                hs = win32service.OpenService(hscm, service_name, win32service.SERVICE_QUERY_CONFIG)

                # Get the description
                config = win32service.QueryServiceConfig(hs)

                group = config[-2]
                if group == "":
                    group = "None"

                dependencies = config[-3]
                if dependencies == []:
                    dependencies = "None"

                exe = config[3]

                # Write the information to the log file
                log_file.write("---\n")
                log_file.write(f"# **Service name: {service_name}**\n")
                log_file.write(f"## Display name: {display_name}\n")
                log_file.write(f"> \n")
                log_file.write(f"* Group: {group}\n")
                log_file.write(f"* Dependencies: {dependencies}\n")
                log_file.write(f"* Executable File Path: `{exe}`\n\n")

            except Exception as e:
                log_file.write(f"Error: {e}\n\n")

if __name__ == '__main__':
    main()
    print("Service information written to log file")