import psutil
import logging
import os

# Set up logging
logger = logging.getLogger(__name__)
logger.setLevel(logging.INFO)

# Define a file handler
if os.path.exists("BoostEngineHelper.log"):
    os.remove("BoostEngineHelper.log")
    
file_handler = logging.FileHandler("BoostEngineHelper.log")
file_handler.setLevel(logging.INFO)

# Define a formatter
formatter = logging.Formatter("%(asctime)s [%(levelname)s] %(message)s", datefmt='%Y-%m-%d %H:%M:%S')
file_handler.setFormatter(formatter)

# Add the handler to the logger
logger.addHandler(file_handler)

# Get set of all active processes
processes = set()
for process in psutil.process_iter():
    try:
        process_name = process.name()
        if not any(process_name.startswith(prefix) for prefix in ["svchost", "winlogon", "smss", "services", "lsass", "csrss", "rundll32", "WmiPrvSE", "trustedinstaller"]) and process_name.endswith(".exe"):
            processes.add(process.name())
    except (psutil.NoSuchProcess, psutil.AccessDenied, psutil.ZombieProcess):
        logger.error(f"Failed to retrieve information about process {process}")

# Get list of all active services
services = []
for service in psutil.win_service_iter():
    if service.status() == "running":
        services.append(service.name())

# Write output to a log file
logger.info("BoostEngineHelper Version 1.2")
logger.info("=====================")
logger.info("Active processes:")
for process in processes:
    logger.info(process)

logger.info("=====================")
logger.info("Active services:")
for service in services:
    logger.info(service)

logger.warning("While closing processes and services, please be careful not to close any important processes or services...")
# Print message to confirm that output has been written to a file
print("The output has been successfully written to a .log file, located in the same directory.")