---
size: 16:9
marp: true
style: {
section {
    background-color: #369;
    color: #fff;
    font-size: 30px;
    padding: 40px;
}
h1,
h2 {
    text-align: center;
    margin: 0;
}
h1 {
    color: #8cf;
}
}
---
# **Service name: BthAvctpSvc**
## Display name: AVCTP service
> This is Audio Video Control Transport Protocol service
* Group: NT AUTHORITY\LocalService
* Dependencies: ['rpcss']
* Executable File Path: `C:\Windows\system32\svchost.exe -k LocalService -p`

---
# **Service name: AarSvc_47ac3**
## Display name: AarSvc_47ac3
> Runtime for activating conversational agent applications
* Group: None
* Dependencies: None
* Executable File Path: `C:\Windows\system32\svchost.exe -k AarSvcGroup -p`

---
# **Service name: AxInstSV**
## Display name: ActiveX Installer (AxInstSV)
> Provides User Account Control validation for the installation of ActiveX controls from the Internet and enables management of ActiveX control installation based on Group Policy settings. This service is started on demand and if disabled the installation of ActiveX controls will behave according to default browser settings.
* Group: LocalSystem
* Dependencies: ['rpcss']
* Executable File Path: `C:\Windows\system32\svchost.exe -k AxInstSVGroup`

---
# **Service name: AJRouter**
## Display name: AllJoyn Router Service
> Routes AllJoyn messages for the local AllJoyn clients. If this service is stopped the AllJoyn clients that do not have their own bundled routers will be unable to run.
* Group: NT AUTHORITY\LocalService
* Dependencies: None
* Executable File Path: `C:\Windows\system32\svchost.exe -k LocalServiceNetworkRestricted -p`

---
# **Service name: AppReadiness**
## Display name: App Readiness
> Gets apps ready for use the first time a user signs in to this PC and when adding new apps.
* Group: LocalSystem
* Dependencies: None
* Executable File Path: `C:\Windows\System32\svchost.exe -k AppReadiness -p`

---
# **Service name: AppXSvc**
## Display name: AppX Deployment Service (AppXSVC)
> Provides infrastructure support for deploying Store applications. This service is started on demand and if disabled Store applications will not be deployed to the system, and may not function properly.
* Dependencies: ['rpcss', 'staterepository']
* Executable File Path: `C:\Windows\system32\svchost.exe -k wsappx -p`

---
# **Service name: AppIDSvc**
## Display name: Application Identity
> Determines and verifies the identity of an application. Disabling this service will prevent AppLocker from being enforced.
* Group: NT Authority\LocalService
* Dependencies: ['RpcSs', 'AppID', 'CryptSvc']
* Executable File Path: `C:\Windows\system32\svchost.exe -k LocalServiceNetworkRestricted -p`

---
# **Service name: Appinfo**
## Display name: Application Information
> Facilitates the running of interactive applications with additional administrative privileges.  If this service is stopped, users will be unable to launch applications with the additional administrative privileges they may require to perform desired user tasks.
* Group: LocalSystem
* Dependencies: ['RpcSs', 'ProfSvc']
* Executable File Path: `C:\Windows\system32\svchost.exe -k netsvcs -p`

---
# **Service name: ALG**
## Display name: Application Layer Gateway Service
> Provides support for 3rd party protocol plug-ins for Internet Connection Sharing
* Group: NT AUTHORITY\LocalService
* Dependencies: None
* Executable File Path: `C:\Windows\System32\alg.exe`

---
# **Service name: tzautoupdate**
## Display name: Auto Time Zone Updater
> Automatically sets the system time zone.
* Group: NT AUTHORITY\LocalService
* Dependencies: None
* Executable File Path: `C:\Windows\system32\svchost.exe -k LocalService -p`

---
# **Service name: BITS**
## Display name: Background Intelligent Transfer Service
> Transfers files in the background using idle network bandwidth. If the service is disabled, then any applications that depend on BITS, such as Windows Update or MSN Explorer, will be unable to automatically download programs and other information.
* Group: LocalSystem
* Dependencies: ['RpcSs']
* Executable File Path: `C:\Windows\System32\svchost.exe -k netsvcs -p`

---
# **Service name: BrokerInfrastructure**
## Display name: Background Tasks Infrastructure Service
> Windows infrastructure service that controls which background tasks can run on the system.
* Group: LocalSystem
* Dependencies: ['RpcEptMapper', 'DcomLaunch', 'RpcSs']
* Executable File Path: `C:\Windows\system32\svchost.exe -k DcomLaunch -p`

---
# **Service name: BFE**
## Display name: Base Filtering Engine
> The Base Filtering Engine (BFE) is a service that manages firewall and Internet Protocol security (IPsec) policies and implements user mode filtering. Stopping or disabling the BFE service will significantly reduce the security of the system. It will also result in unpredictable behavior in IPsec management and firewall applications.
* Group: NT AUTHORITY\LocalService
* Dependencies: ['RpcSs']
* Executable File Path: `C:\Windows\system32\svchost.exe -k LocalServiceNoNetworkFirewall -p`

---
# **Service name: BcastDVRUserService_47ac3**
## Display name: BcastDVRUserService_47ac3
> This user service is used for Game Recordings and Live Broadcasts
* Group: None
* Dependencies: None
* Executable File Path: `C:\Windows\system32\svchost.exe -k BcastDVRUserService`

---
# **Service name: BDESVC**
## Display name: BitLocker Drive Encryption Service
> BDESVC hosts the BitLocker Drive Encryption service. BitLocker Drive Encryption provides secure startup for the operating system, as well as full volume encryption for OS, fixed or removable volumes. This service allows BitLocker to prompt users for various actions related to their volumes when mounted, and unlocks volumes automatically without user interaction. Additionally, it stores recovery information to Active Directory, if available, and, if necessary, ensures the most recent recovery certificates are used.  Stopping or disabling the service would prevent users from leveraging this functionality.
* Group: localSystem
* Dependencies: None
* Executable File Path: `C:\Windows\System32\svchost.exe -k netsvcs -p`

---
# **Service name: wbengine**
## Display name: Block Level Backup Engine Service
> The WBENGINE service is used by Windows Backup to perform backup and recovery operations. If this service is stopped by a user, it may cause the currently running backup or recovery operation to fail. Disabling this service may disable backup and recovery operations using Windows Backup on this computer.
* Group: localSystem
* Dependencies: None
* Executable File Path: `"C:\Windows\system32\wbengine.exe"`

---
# **Service name: BTAGService**
## Display name: Bluetooth Audio Gateway Service
> Service supporting the audio gateway role of the Bluetooth Handsfree Profile.
* Group: NT AUTHORITY\LocalService
* Dependencies: ['rpcss']
* Executable File Path: `C:\Windows\system32\svchost.exe -k LocalServiceNetworkRestricted`

---
# **Service name: bthserv**
## Display name: Bluetooth Support Service
> The Bluetooth service supports discovery and association of remote Bluetooth devices.  Stopping or disabling this service may cause already installed Bluetooth devices to fail to operate properly and prevent new devices from being discovered or associated.
* Group: NT AUTHORITY\LocalService
* Dependencies: None
* Executable File Path: `C:\Windows\system32\svchost.exe -k LocalService -p`

---
# **Service name: BluetoothUserService_47ac3**
## Display name: BluetoothUserService_47ac3
> The Bluetooth user service supports proper functionality of Bluetooth features relevant to each user session.
* Group: None
* Dependencies: None
* Executable File Path: `C:\Windows\system32\svchost.exe -k BthAppGroup -p`

---
# **Service name: CDPUserSvc_47ac3**
## Display name: CDPUserSvc_47ac3
> This user service is used for Connected Devices Platform scenarios
* Group: None
* Dependencies: None
* Executable File Path: `C:\Windows\system32\svchost.exe -k UnistackSvcGroup`

---
# **Service name: KeyIso**
## Display name: CNG Key Isolation
> The CNG key isolation service is hosted in the LSA process. The service provides key process isolation to private keys and associated cryptographic operations as required by the Common Criteria. The service stores and uses long-lived keys in a secure process complying with Common Criteria requirements.
* Group: LocalSystem
* Dependencies: ['RpcSs']
* Executable File Path: `C:\Windows\system32\lsass.exe`

---
# **Service name: EventSystem**
## Display name: COM+ Event System
> Supports System Event Notification Service (SENS), which provides automatic distribution of events to subscribing Component Object Model (COM) components. If the service is stopped, SENS will close and will not be able to provide logon and logoff notifications. If this service is disabled, any services that explicitly depend on it will fail to start.
* Group: NT AUTHORITY\LocalService
* Dependencies: ['rpcss']
* Executable File Path: `C:\Windows\system32\svchost.exe -k LocalService -p`

---
# **Service name: COMSysApp**
## Display name: COM+ System Application
> Manages the configuration and tracking of Component Object Model (COM)+-based components. If the service is stopped, most COM+-based components will not function properly. If this service is disabled, any services that explicitly depend on it will fail to start.
* Group: LocalSystem
* Dependencies: ['RpcSs', 'EventSystem', 'SENS']
* Executable File Path: `C:\Windows\system32\dllhost.exe /Processid:{02D4B3F1-FD88-11D1-960D-00805FC79235}`

---
# **Service name: camsvc**
## Display name: Capability Access Manager Service
> Provides facilities for managing UWP apps access to app capabilities as well as checking an app's access to specific app capabilities
* Group: LocalSystem
* Dependencies: None
* Executable File Path: `C:\Windows\system32\svchost.exe -k appmodel -p`

---
# **Service name: CaptureService_47ac3**
## Display name: CaptureService_47ac3
> Enables optional screen capture functionality for applications that call the Windows.Graphics.Capture API.
* Group: None
* Dependencies: None
* Executable File Path: `C:\Windows\system32\svchost.exe -k LocalService -p`

---
# **Service name: autotimesvc**
## Display name: Cellular Time
> This service sets time based on NITZ messages from a Mobile Network
* Group: NT AUTHORITY\LocalService
* Dependencies: ['rpcss']
* Executable File Path: `C:\Windows\system32\svchost.exe -k autoTimeSvc`

---
# **Service name: CertPropSvc**
## Display name: Certificate Propagation
> Copies user certificates and root certificates from smart cards into the current user's certificate store, detects when a smart card is inserted into a smart card reader, and, if needed, installs the smart card Plug and Play minidriver.
* Group: LocalSystem
* Dependencies: ['RpcSs']
* Executable File Path: `C:\Windows\system32\svchost.exe -k netsvcs`

---
# **Service name: ClipSVC**
## Display name: Client License Service (ClipSVC)
> Provides infrastructure support for the Microsoft Store. This service is started on demand and if disabled applications bought using Windows Store will not behave correctly.
* Group: LocalSystem
* Dependencies: ['rpcss']
* Executable File Path: `C:\Windows\System32\svchost.exe -k wsappx -p`

---
# **Service name: Browser**
## Display name: Computer Browser
> Maintains an updated list of computers on the network and supplies this list to computers designated as browsers. If this service is stopped, this list will not be updated or maintained. If this service is disabled, any services that explicitly depend on it will fail to start.
* Group: LocalSystem
* Dependencies: ['LanmanWorkstation', 'LanmanServer']
* Executable File Path: `C:\Windows\System32\svchost.exe -k netsvcs -p`

---
# **Service name: CDPSvc**
## Display name: Connected Devices Platform Service
> This service is used for Connected Devices Platform scenarios
* Group: NT AUTHORITY\LocalService
* Dependencies: ['ncbservice', 'RpcSS', 'Tcpip']
* Executable File Path: `C:\Windows\system32\svchost.exe -k LocalService -p`

---
# **Service name: DiagTrack**
## Display name: Connected User Experiences and Telemetry
> The Connected User Experiences and Telemetry service enables features that support in-application and connected user experiences. Additionally, this service manages the event driven collection and transmission of diagnostic and usage information (used to improve the experience and quality of the Windows Platform) when the diagnostics and usage privacy option settings are enabled under Feedback and Diagnostics.
* Group: LocalSystem
* Dependencies: ['RpcSs']
* Executable File Path: `C:\Windows\System32\svchost.exe -k utcsvc -p`

---
# **Service name: ConsentUxUserSvc_47ac3**
## Display name: ConsentUxUserSvc_47ac3
> Allows ConnectUX and PC Settings to Connect and Pair with WiFi displays and Bluetooth devices.
* Group: None
* Dependencies: None
* Executable File Path: `C:\Windows\system32\svchost.exe -k DevicesFlow`

---
# **Service name: CoreMessagingRegistrar**
## Display name: CoreMessaging
> Manages communication between system components.
* Group: NT AUTHORITY\LocalService
* Dependencies: ['rpcss']
* Executable File Path: `C:\Windows\system32\svchost.exe -k LocalServiceNoNetwork -p`

---
# **Service name: VaultSvc**
## Display name: Credential Manager
> Provides secure storage and retrieval of credentials to users, applications and security service packages.
* Group: LocalSystem
* Dependencies: ['rpcss']
* Executable File Path: `C:\Windows\system32\lsass.exe`

---
# **Service name: CredentialEnrollmentManagerUserSvc_47ac3**
## Display name: CredentialEnrollmentManagerUserSvc_47ac3
> Credential Enrollment Manager
* Group: None
* Dependencies: None
* Executable File Path: `C:\Windows\system32\CredentialEnrollmentManager.exe`

---
# **Service name: CryptSvc**
## Display name: Cryptographic Services
> Provides three management services: Catalog Database Service, which confirms the signatures of Windows files and allows new programs to be installed; Protected Root Service, which adds and removes Trusted Root Certification Authority certificates from this computer; and Automatic Root Certificate Update Service, which retrieves root certificates from Windows Update and enable scenarios such as SSL. If this service is stopped, these management services will not function properly. If this service is disabled, any services that explicitly depend on it will fail to start.
* Group: NT Authority\NetworkService
* Dependencies: ['RpcSs']
* Executable File Path: `C:\Windows\system32\svchost.exe -k NetworkService -p`

---
# **Service name: DcomLaunch**
## Display name: DCOM Server Process Launcher
> The DCOMLAUNCH service launches COM and DCOM servers in response to object activation requests. If this service is stopped or disabled, programs using COM or DCOM will not function properly. It is strongly recommended that you have the DCOMLAUNCH service running.
* Group: LocalSystem
* Dependencies: None
* Executable File Path: `C:\Windows\system32\svchost.exe -k DcomLaunch -p`

---
# **Service name: Dhcp**
## Display name: DHCP Client
> Registers and updates IP addresses and DNS records for this computer. If this service is stopped, this computer will not receive dynamic IP addresses and DNS updates. If this service is disabled, any services that explicitly depend on it will fail to start.
* Group: NT Authority\LocalService
* Dependencies: ['NSI', 'Afd']
* Executable File Path: `C:\Windows\system32\svchost.exe -k LocalServiceNetworkRestricted -p`

---
# **Service name: Dnscache**
## Display name: DNS Client
> 
* Group: NT AUTHORITY\NetworkService
* Dependencies: ['nsi', 'Afd']
* Executable File Path: `C:\Windows\system32\svchost.exe -k NetworkService -p`

---
# **Service name: DsSvc**
## Display name: Data Sharing Service
> The DNS Client service (dnscache) caches Domain Name System (DNS) names and registers the full computer name for this computer. If the service is stopped, DNS names will continue to be resolved. However, the results of DNS name queries will not be cached and the computer's name will not be registered. If the service is disabled, any services that explicitly depend on it will fail to start.
* Group: LocalSystem
* Dependencies: None
* Executable File Path: `C:\Windows\System32\svchost.exe -k LocalSystemNetworkRestricted -p`

---
# **Service name: DusmSvc**
## Display name: Data Usage
> Network data usage, data limit, restrict background data, metered networks.
* Group: NT Authority\LocalService
* Dependencies: ['RpcSs']
* Executable File Path: `C:\Windows\System32\svchost.exe -k LocalServiceNetworkRestricted -p`

---
# **Service name: DoSvc**
## Display name: Delivery Optimization
> Performs content delivery optimization tasks
* Group: NT Authority\NetworkService
* Dependencies: ['rpcss']
* Executable File Path: `C:\Windows\System32\svchost.exe -k NetworkService -p`

---
# **Service name: DevQueryBroker**
## Display name: DevQuery Background Discovery Broker
> Enables apps to discover devices with a backgroud task
* Group: LocalSystem
* Dependencies: None
* Executable File Path: `C:\Windows\system32\svchost.exe -k LocalSystemNetworkRestricted -p`

---
# **Service name: DeviceAssociationService**
## Display name: Device Association Service
> Enables pairing between the system and wired or wireless devices.
* Group: LocalSystem
* Dependencies: None
* Executable File Path: `C:\Windows\system32\svchost.exe -k LocalSystemNetworkRestricted -p`

---
# **Service name: DeviceInstall**
## Display name: Device Install Service
> Enables a computer to recognize and adapt to hardware changes with little or no user input. Stopping or disabling this service will result in system instability.
* Group: LocalSystem
* Dependencies: None
* Executable File Path: `C:\Windows\system32\svchost.exe -k DcomLaunch -p`

---
# **Service name: DmEnrollmentSvc**
## Display name: Device Management Enrollment Service
> Performs Device Enrollment Activities for Device Management
* Group: LocalSystem
* Dependencies: ['rpcss']
* Executable File Path: `C:\Windows\system32\svchost.exe -k netsvcs -p`

---
# **Service name: dmwappushservice**
## Display name: Device Management Wireless Application Protocol (WAP) Push message Routing Service
> Routes Wireless Application Protocol (WAP) Push messages received by the device and synchronizes Device Management sessions
* Group: LocalSystem
* Dependencies: ['rpcss']
* Executable File Path: `C:\Windows\system32\svchost.exe -k netsvcs -p`

---
# **Service name: DsmSvc**
## Display name: Device Setup Manager
> Enables the detection, download and installation of device-related software. If this service is disabled, devices may be configured with outdated software, and may not work correctly.
* Group: LocalSystem
* Dependencies: ['RpcSs']
* Executable File Path: `C:\Windows\system32\svchost.exe -k netsvcs -p`

---
# **Service name: DeviceAssociationBrokerSvc_47ac3**
## Display name: DeviceAssociationBrokerSvc_47ac3
> Enables apps to pair devices
* Group: None
* Dependencies: None
* Executable File Path: `C:\Windows\system32\svchost.exe -k DevicesFlow -p`

---
# **Service name: DevicePickerUserSvc_47ac3**
## Display name: DevicePickerUserSvc_47ac3
> This user service is used for managing the Miracast, DLNA, and DIAL UI
* Group: None
* Dependencies: None
* Executable File Path: `C:\Windows\system32\svchost.exe -k DevicesFlow`

---
# **Service name: DevicesFlowUserSvc_47ac3**
## Display name: DevicesFlowUserSvc_47ac3
> Allows ConnectUX and PC Settings to Connect and Pair with WiFi displays and Bluetooth devices.
* Group: None
* Dependencies: None
* Executable File Path: `C:\Windows\system32\svchost.exe -k DevicesFlow`

---
# **Service name: diagsvc**
## Display name: Diagnostic Execution Service
> Executes diagnostic actions for troubleshooting support
* Group: LocalSystem
* Dependencies: ['RpcSs']
* Executable File Path: `C:\Windows\System32\svchost.exe -k diagnostics`

---
# **Service name: DPS**
## Display name: Diagnostic Policy Service
> The Diagnostic Policy Service enables problem detection, troubleshooting and resolution for Windows components.  If this service is stopped, diagnostics will no longer function.
* Group: NT AUTHORITY\LocalService
* Dependencies: None
* Executable File Path: `C:\Windows\System32\svchost.exe -k LocalServiceNoNetwork -p`

---
# **Service name: WdiServiceHost**
## Display name: Diagnostic Service Host
> The Diagnostic Service Host is used by the Diagnostic Policy Service to host diagnostics that need to run in a Local Service context.  If this service is stopped, any diagnostics that depend on it will no longer function.
* Group: NT AUTHORITY\LocalService
* Dependencies: None
* Executable File Path: `C:\Windows\System32\svchost.exe -k LocalService -p`

---
# **Service name: WdiSystemHost**
## Display name: Diagnostic System Host
> The Diagnostic System Host is used by the Diagnostic Policy Service to host diagnostics that need to run in a Local System context.  If this service is stopped, any diagnostics that depend on it will no longer function.
* Group: LocalSystem
* Dependencies: None
* Executable File Path: `C:\Windows\System32\svchost.exe -k LocalSystemNetworkRestricted -p`

---
# **Service name: DisplayEnhancementService**
## Display name: Display Enhancement Service
> A service for managing display enhancement such as brightness control.
* Group: LocalSystem
* Dependencies: None
* Executable File Path: `C:\Windows\system32\svchost.exe -k LocalSystemNetworkRestricted -p`

---
# **Service name: DispBrokerDesktopSvc**
## Display name: Display Policy Service
> Manages the connection and configuration of local and remote displays
* Group: NT AUTHORITY\LocalService
* Dependencies: ['RpcSS']
* Executable File Path: `C:\Windows\system32\svchost.exe -k LocalService -p`

---
# **Service name: TrkWks**
## Display name: Distributed Link Tracking Client
> Maintains links between NTFS files within a computer or across computers in a network.
* Group: LocalSystem
* Dependencies: ['RpcSs']
* Executable File Path: `C:\Windows\System32\svchost.exe -k LocalSystemNetworkRestricted -p`

---
# **Service name: MSDTC**
## Display name: Distributed Transaction Coordinator
> Coordinates transactions that span multiple resource managers, such as databases, message queues, and file systems. If this service is stopped, these transactions will fail. If this service is disabled, any services that explicitly depend on it will fail to start.
* Group: NT AUTHORITY\NetworkService
* Dependencies: ['RPCSS', 'SamSS']
* Executable File Path: `C:\Windows\System32\msdtc.exe`

---
# **Service name: MapsBroker**
## Display name: Downloaded Maps Manager
> Windows service for application access to downloaded maps. This service is started on-demand by application accessing downloaded maps. Disabling this service will prevent apps from accessing maps.
* Group: NT AUTHORITY\NetworkService
* Dependencies: ['rpcss']
* Executable File Path: `C:\Windows\System32\svchost.exe -k NetworkService -p`

---
# **Service name: EasyAntiCheat_EOS**
## Display name: Easy Anti-Cheat (Epic Online Services)
> Provides security for online multiplayer games.
* Group: LocalSystem
* Dependencies: None
* Executable File Path: `"C:\Program Files (x86)\EasyAntiCheat_EOS\EasyAntiCheat_EOS.exe"`

---
# **Service name: embeddedmode**
## Display name: Embedded Mode
> The Embedded Mode service enables scenarios related to Background Applications.  Disabling this service will prevent Background Applications from being activated.
* Group: LocalSystem
* Dependencies: ['BrokerInfrastructure']
* Executable File Path: `C:\Windows\System32\svchost.exe -k LocalSystemNetworkRestricted -p`

---
# **Service name: EFS**
## Display name: Encrypting File System (EFS)
> Provides the core file encryption technology used to store encrypted files on NTFS file system volumes. If this service is stopped or disabled, applications will be unable to access encrypted files.
* Group: LocalSystem
* Dependencies: ['RPCSS']
* Executable File Path: `C:\Windows\System32\lsass.exe`

---
# **Service name: EntAppSvc**
## Display name: Enterprise App Management Service
> Enables enterprise application management.
* Group: LocalSystem
* Dependencies: ['rpcss']
* Executable File Path: `C:\Windows\system32\svchost.exe -k appmodel -p`

---
# **Service name: EpicOnlineServices**
## Display name: Epic Online Services
> Runs background processes for applications using Epic Games services
* Group: LocalSystem
* Dependencies: None
* Executable File Path: `"C:\Program Files (x86)\Epic Games\Epic Online Services\service\EpicOnlineServicesHost.exe"`

---
# **Service name: Eaphost**
## Display name: Extensible Authentication Protocol
> The Extensible Authentication Protocol (EAP) service provides network authentication in such scenarios as 802.1x wired and wireless, VPN, and Network Access Protection (NAP).  EAP also provides application programming interfaces (APIs) that are used by network access clients, including wireless and VPN clients, during the authentication process.  If you disable this service, this computer is prevented from accessing networks that require EAP authentication.
* Group: localSystem
* Dependencies: ['RPCSS', 'KeyIso']
* Executable File Path: `C:\Windows\System32\svchost.exe -k netsvcs -p`

---
# **Service name: Fax**
## Display name: Fax
> Enables you to send and receive faxes, utilizing fax resources available on this computer or on the network.
* Group: NT AUTHORITY\NetworkService
* Dependencies: ['TapiSrv', 'RpcSs', 'Spooler']
* Executable File Path: `C:\Windows\system32\fxssvc.exe`

---
# **Service name: fhsvc**
## Display name: File History Service
> Protects user files from accidental loss by copying them to a backup location
* Group: LocalSystem
* Dependencies: ['RpcSs']
* Executable File Path: `C:\Windows\system32\svchost.exe -k LocalSystemNetworkRestricted -p`

---
# **Service name: fdPHost**
## Display name: Function Discovery Provider Host
> The FDPHOST service hosts the Function Discovery (FD) network discovery providers. These FD providers supply network discovery services for the Simple Services Discovery Protocol (SSDP) and Web Services – Discovery (WS-D) protocol. Stopping or disabling the FDPHOST service will disable network discovery for these protocols when using FD. When this service is unavailable, network services using FD and relying on these discovery protocols will be unable to find network devices or resources.
* Group: NT AUTHORITY\LocalService
* Dependencies: ['RpcSs', 'http']
* Executable File Path: `C:\Windows\system32\svchost.exe -k LocalService -p`

---
# **Service name: FDResPub**
## Display name: Function Discovery Resource Publication
> Publishes this computer and resources attached to this computer so they can be discovered over the network.  If this service is stopped, network resources will no longer be published and they will not be discovered by other computers on the network.
* Group: NT AUTHORITY\LocalService
* Dependencies: ['RpcSs', 'http', 'fdphost']
* Executable File Path: `C:\Windows\system32\svchost.exe -k LocalServiceAndNoImpersonation -p`

---
# **Service name: lfsvc**
## Display name: Geolocation Service
> This service monitors the current location of the system and manages geofences (a geographical location with associated events).  If you turn off this service, applications will be unable to use or receive notifications for geolocation or geofences.
* Group: LocalSystem
* Dependencies: ['RpcSs']
* Executable File Path: `C:\Windows\system32\svchost.exe -k netsvcs -p`

---
# **Service name: GoogleChromeElevationService**
## Display name: Google Chrome Elevation Service (GoogleChromeElevationService)
> No Description
* Group: LocalSystem
* Dependencies: ['RPCSS']
* Executable File Path: `"C:\Program Files\Google\Chrome\Application\109.0.5414.120\elevation_service.exe"`

---
# **Service name: gupdate**
## Display name: Google Update Service (gupdate)
> Keeps your Google software up to date. If this service is disabled or stopped, your Google software will not be kept up to date, meaning security vulnerabilities that may arise cannot be fixed and features may not work. This service uninstalls itself when there is no Google software using it.
* Group: LocalSystem
* Dependencies: ['RPCSS']
* Executable File Path: `"C:\Program Files (x86)\Google\Update\GoogleUpdate.exe" /svc`

---
# **Service name: gupdatem**
## Display name: Google Update Service (gupdatem)
> Keeps your Google software up to date. If this service is disabled or stopped, your Google software will not be kept up to date, meaning security vulnerabilities that may arise cannot be fixed and features may not work. This service uninstalls itself when there is no Google software using it.
* Group: LocalSystem
* Dependencies: ['RPCSS']
* Executable File Path: `"C:\Program Files (x86)\Google\Update\GoogleUpdate.exe" /medsvc`

---
# **Service name: GraphicsPerfSvc**
## Display name: GraphicsPerfSvc
> Graphics performance monitor service
* Group: LocalSystem
* Dependencies: None
* Executable File Path: `C:\Windows\System32\svchost.exe -k GraphicsPerfSvcGroup`

---
# **Service name: gpsvc**
## Display name: Group Policy Client
> The service is responsible for applying settings configured by administrators for the computer and users through the Group Policy component. If the service is disabled, the settings will not be applied and applications and components will not be manageable through Group Policy. Any components or applications that depend on the Group Policy component might not be functional if the service is disabled.
* Group: LocalSystem
* Dependencies: ['RPCSS', 'Mup']
* Executable File Path: `C:\Windows\system32\svchost.exe -k netsvcs -p`

---
# **Service name: HvHost**
## Display name: HV Host Service
> 
* Group: LocalSystem
* Dependencies: ['hvservice']
* Executable File Path: `C:\Windows\system32\svchost.exe -k LocalSystemNetworkRestricted -p`

---
# **Service name: hns**
## Display name: Host Network Service
> Provides an interface for the Hyper-V hypervisor to provide per-partition performance counters to the host operating system.
* Group: LocalSystem
* Dependencies: ['RpcSs', 'nsi', 'vfpext']
* Executable File Path: `C:\Windows\system32\svchost.exe -k NetSvcs -p`

---
# **Service name: hidserv**
## Display name: Human Interface Device Service
> Activates and maintains the use of hot buttons on keyboards, remote controls, and other multimedia devices. It is recommended that you keep this service running.
* Group: LocalSystem
* Dependencies: None
* Executable File Path: `C:\Windows\system32\svchost.exe -k LocalSystemNetworkRestricted -p`

---
# **Service name: vmickvpexchange**
## Display name: Hyper-V Data Exchange Service
> Provides a mechanism to exchange data between the virtual machine and the operating system running on the physical computer.
* Group: LocalSystem
* Dependencies: None
* Executable File Path: `C:\Windows\system32\svchost.exe -k LocalSystemNetworkRestricted -p`

---
# **Service name: vmicguestinterface**
## Display name: Hyper-V Guest Service Interface
> Provides an interface for the Hyper-V host to interact with specific services running inside the virtual machine.
* Group: LocalSystem
* Dependencies: None
* Executable File Path: `C:\Windows\system32\svchost.exe -k LocalSystemNetworkRestricted -p`

---
# **Service name: vmicshutdown**
## Display name: Hyper-V Guest Shutdown Service
> Provides a mechanism to shut down the operating system of this virtual machine from the management interfaces on the physical computer.
* Group: LocalSystem
* Dependencies: None
* Executable File Path: `C:\Windows\system32\svchost.exe -k LocalSystemNetworkRestricted -p`

---
# **Service name: vmicheartbeat**
## Display name: Hyper-V Heartbeat Service
> Monitors the state of this virtual machine by reporting a heartbeat at regular intervals. This service helps you identify running virtual machines that have stopped responding.
* Group: LocalSystem
* Dependencies: None
* Executable File Path: `C:\Windows\system32\svchost.exe -k ICService -p`

---
# **Service name: vmcompute**
## Display name: Hyper-V Host Compute Service
> Provides support for running Windows Containers and Virtual Machines.
* Group: LocalSystem
* Dependencies: ['rpcss', 'wcifs', 'hvsocketcontrol', 'condrv']
* Executable File Path: `C:\Windows\system32\vmcompute.exe`

---
# **Service name: vmicvmsession**
## Display name: Hyper-V PowerShell Direct Service
> Provides a mechanism to manage virtual machine with PowerShell via VM session without a virtual network.
* Group: LocalSystem
* Dependencies: None
* Executable File Path: `C:\Windows\system32\svchost.exe -k LocalSystemNetworkRestricted -p`

---
# **Service name: vmicrdv**
## Display name: Hyper-V Remote Desktop Virtualization Service
> Provides a platform for communication between the virtual machine and the operating system running on the physical computer.
* Group: LocalSystem
* Dependencies: None
* Executable File Path: `C:\Windows\system32\svchost.exe -k ICService -p`

---
# **Service name: vmictimesync**
## Display name: Hyper-V Time Synchronization Service
> Synchronizes the system time of this virtual machine with the system time of the physical computer.
* Group: NT AUTHORITY\LocalService
* Dependencies: ['VmGid']
* Executable File Path: `C:\Windows\system32\svchost.exe -k LocalServiceNetworkRestricted -p`

---
# **Service name: vmicvss**
## Display name: Hyper-V Volume Shadow Copy Requestor
> Coordinates the communications that are required to use Volume Shadow Copy Service to back up applications and data on this virtual machine from the operating system on the physical computer.
* Group: LocalSystem
* Dependencies: None
* Executable File Path: `C:\Windows\system32\svchost.exe -k LocalSystemNetworkRestricted -p`

---
# **Service name: IKEEXT**
## Display name: IKE and AuthIP IPsec Keying Modules
> The IKEEXT service hosts the Internet Key Exchange (IKE) and Authenticated Internet Protocol (AuthIP) keying modules. These keying modules are used for authentication and key exchange in Internet Protocol security (IPsec). Stopping or disabling the IKEEXT service will disable IKE and AuthIP key exchange with peer computers. IPsec is typically configured to use IKE or AuthIP; therefore, stopping or disabling the IKEEXT service might result in an IPsec failure and might compromise the security of the system. It is strongly recommended that you have the IKEEXT service running.
* Group: LocalSystem
* Dependencies: ['BFE', 'nsi']
* Executable File Path: `C:\Windows\system32\svchost.exe -k netsvcs -p`

---
# **Service name: iphlpsvc**
## Display name: IP Helper
> Provides tunnel connectivity using IPv6 transition technologies (6to4, ISATAP, Port Proxy, and Teredo), and IP-HTTPS. If this service is stopped, the computer will not have the enhanced connectivity benefits that these technologies offer.
* Group: LocalSystem
* Dependencies: ['RpcSS', 'winmgmt', 'tcpip', 'nsi', 'WinHttpAutoProxySvc']
* Executable File Path: `C:\Windows\System32\svchost.exe -k NetSvcs -p`

---
# **Service name: IpxlatCfgSvc**
## Display name: IP Translation Configuration Service
> Configures and enables translation from v4 to v6 and vice versa
* Group: LocalSystem
* Dependencies: ['nsi']
* Executable File Path: `C:\Windows\System32\svchost.exe -k LocalSystemNetworkRestricted -p`

---
# **Service name: PolicyAgent**
## Display name: IPsec Policy Agent
> Internet Protocol security (IPsec) supports network-level peer authentication, data origin authentication, data integrity, data confidentiality (encryption), and replay protection.  This service enforces IPsec policies created through the IP Security Policies snap-in or the command-line tool "netsh ipsec".  If you stop this service, you may experience network connectivity issues if your policy requires that connections use IPsec.  Also,remote management of Windows Defender Firewall is not available when this service is stopped.
* Group: NT Authority\NetworkService
* Dependencies: ['Tcpip', 'bfe']
* Executable File Path: `C:\Windows\system32\svchost.exe -k NetworkServiceNetworkRestricted -p`

---
# **Service name: SharedAccess**
## Display name: Internet Connection Sharing (ICS)
> Provides network address translation, addressing, name resolution and/or intrusion prevention services for a home or small office network.
* Group: LocalSystem
* Dependencies: ['BFE']
* Executable File Path: `C:\Windows\System32\svchost.exe -k netsvcs -p`

---
# **Service name: KtmRm**
## Display name: KtmRm for Distributed Transaction Coordinator
> Coordinates transactions between the Distributed Transaction Coordinator (MSDTC) and the Kernel Transaction Manager (KTM). If it is not needed, it is recommended that this service remain stopped. If it is needed, both MSDTC and KTM will start this service automatically. If this service is disabled, any MSDTC transaction interacting with a Kernel Resource Manager will fail and any services that explicitly depend on it will fail to start.
* Group: NT AUTHORITY\NetworkService
* Dependencies: ['RPCSS', 'SamSS']
* Executable File Path: `C:\Windows\System32\svchost.exe -k NetworkServiceAndNoImpersonation -p`

---
# **Service name: LxpSvc**
## Display name: Language Experience Service
> 
* Group: LocalSystem
* Dependencies: None
* Executable File Path: `C:\Windows\system32\svchost.exe -k netsvcs`

---
# **Service name: lltdsvc**
## Display name: Link-Layer Topology Discovery Mapper
> Provides infrastructure support for deploying and configuring localized Windows resources. This service is started on demand and, if disabled, additional Windows languages will not be deployed to the system, and Windows may not function properly.
* Group: NT AUTHORITY\LocalService
* Dependencies: ['rpcss', 'lltdio']
* Executable File Path: `C:\Windows\System32\svchost.exe -k LocalService -p`

---
# **Service name: wlpasvc**
## Display name: Local Profile Assistant Service
> This service provides profile management for subscriber identity modules
* Group: NT Authority\LocalService
* Dependencies: ['WwanSvc', 'RpcSs']
* Executable File Path: `C:\Windows\system32\svchost.exe -k LocalServiceNetworkRestricted -p`

---
# **Service name: LSM**
## Display name: Local Session Manager
> Core Windows Service that manages local user sessions. Stopping or disabling this service will result in system instability.
* Group: LocalSystem
* Dependencies: ['RpcEptMapper', 'DcomLaunch', 'RpcSs']
* Executable File Path: `C:\Windows\system32\svchost.exe -k DcomLaunch -p`

---
# **Service name: LxssManager**
## Display name: LxssManager
> The LXSS Manager service supports running native ELF binaries. The service provides the infrastructure necessary for ELF binaries to run on Windows. If the service is stopped or disabled, those binaries will no longer run.
* Group: LocalSystem
* Dependencies: ['RPCSS', 'staterepository']
* Executable File Path: `C:\Windows\system32\svchost.exe -k netsvcs -p`

---
# **Service name: LxssManagerUser_47ac3**
## Display name: LxssManagerUser_47ac3
> The LXSS Manager User service supports running native ELF binaries. The service provides the infrastructure necessary for ELF binaries to run on Windows. If the service is stopped or disabled, those binaries will no longer run.
* Group: None
* Dependencies: None
* Executable File Path: `C:\Windows\system32\svchost.exe -k LxssManagerUser -p`

---
# **Service name: McpManagementService**
## Display name: McpManagementService
> <Failed to Read Description. Error Code: 15100 > 
* Group: LocalSystem
* Dependencies: ['RpcSs']
* Executable File Path: `C:\Windows\system32\svchost.exe -k McpManagementServiceGroup`

---
# **Service name: MessagingService_47ac3**
## Display name: MessagingService_47ac3
> Service supporting text messaging and related functionality.
* Group: None
* Dependencies: None
* Executable File Path: `C:\Windows\system32\svchost.exe -k UnistackSvcGroup`

---
# **Service name: diagnosticshub.standardcollector.service**
## Display name: Microsoft (R) Diagnostics Hub Standard Collector Service
> Diagnostics Hub Standard Collector Service. When running, this service collects real time ETW events and processes them.
* Group: LocalSystem
* Dependencies: None
* Executable File Path: `C:\Windows\system32\DiagSvcs\DiagnosticsHub.StandardCollector.Service.exe`

---
# **Service name: wlidsvc**
## Display name: Microsoft Account Sign-in Assistant
> Enables user sign-in through Microsoft account identity services. If this service is stopped, users will not be able to logon to the computer with their Microsoft account.
* Group: LocalSystem
* Dependencies: ['RpcSs']
* Executable File Path: `C:\Windows\system32\svchost.exe -k netsvcs -p`

---
# **Service name: WdNisSvc**
## Display name: Microsoft Defender Antivirus Network Inspection Service
> Helps guard against intrusion attempts targeting known and newly discovered vulnerabilities in network protocols
* Group: NT AUTHORITY\LocalService
* Dependencies: ['WdNisDrv']
* Executable File Path: `"C:\ProgramData\Microsoft\Windows Defender\platform\4.18.2211.5-0\NisSrv.exe"`

---
# **Service name: WinDefend**
## Display name: Microsoft Defender Antivirus Service
> Helps protect users from malware and other potentially unwanted software
* Group: LocalSystem
* Dependencies: ['RpcSs']
* Executable File Path: `"C:\ProgramData\Microsoft\Windows Defender\platform\4.18.2211.5-0\MsMpEng.exe"`

---
# **Service name: MicrosoftEdgeElevationService**
## Display name: Microsoft Edge Elevation Service (MicrosoftEdgeElevationService)
> Keeps Microsoft Edge up to update. If this service is disabled, the application will not be kept up to date.
* Group: LocalSystem
* Dependencies: ['RPCSS']
* Executable File Path: `"C:\Program Files (x86)\Microsoft\Edge\Application\109.0.1518.78\elevation_service.exe"`

---
# **Service name: edgeupdate**
## Display name: Microsoft Edge Update Service (edgeupdate)
> Keeps your Microsoft software up to date. If this service is disabled or stopped, your Microsoft software will not be kept up to date, meaning security vulnerabilities that may arise cannot be fixed and features may not work. This service uninstalls itself when there is no Microsoft software using it.
* Group: LocalSystem
* Dependencies: ['RPCSS']
* Executable File Path: `"C:\Program Files (x86)\Microsoft\EdgeUpdate\MicrosoftEdgeUpdate.exe" /svc`

---
# **Service name: edgeupdatem**
## Display name: Microsoft Edge Update Service (edgeupdatem)
> Keeps your Microsoft software up to date. If this service is disabled or stopped, your Microsoft software will not be kept up to date, meaning security vulnerabilities that may arise cannot be fixed and features may not work. This service uninstalls itself when there is no Microsoft software using it.
* Group: LocalSystem
* Dependencies: ['RPCSS']
* Executable File Path: `"C:\Program Files (x86)\Microsoft\EdgeUpdate\MicrosoftEdgeUpdate.exe" /medsvc`

---
# **Service name: ClickToRunSvc**
## Display name: Microsoft Office Click-to-Run Service
> 
* Group: LocalSystem
* Dependencies: None
* Executable File Path: `"C:\Program Files\Common Files\Microsoft Shared\ClickToRun\OfficeClickToRun.exe" /service`

---
# **Service name: NgcSvc**
## Display name: Microsoft Passport
> Manages resource coordination, background streaming, and system integration of Microsoft Office products and their related updates. This service is required to run during the use of any Microsoft Office program, during initial streaming installation and all subsequent updates.‬
* Group: LocalSystem
* Dependencies: ['RpcSs']
* Executable File Path: `C:\Windows\system32\svchost.exe -k LocalSystemNetworkRestricted -p`

---
# **Service name: NgcCtnrSvc**
## Display name: Microsoft Passport Container
> Manages local user identity keys used to authenticate user to identity providers as well as TPM virtual smart cards. If this service is disabled, local user identity keys and TPM virtual smart cards will not be accessible. It is recommended that you do not reconfigure this service.
* Group: NT AUTHORITY\LocalService
* Dependencies: ['RpcSs']
* Executable File Path: `C:\Windows\system32\svchost.exe -k LocalServiceNetworkRestricted -p`

---
# **Service name: swprv**
## Display name: Microsoft Software Shadow Copy Provider
> Manages software-based volume shadow copies taken by the Volume Shadow Copy service. If this service is stopped, software-based volume shadow copies cannot be managed. If this service is disabled, any services that explicitly depend on it will fail to start.
* Group: LocalSystem
* Dependencies: ['RPCSS']
* Executable File Path: `C:\Windows\System32\svchost.exe -k swprv`

---
# **Service name: smphost**
## Display name: Microsoft Storage Spaces SMP
> Host service for the Microsoft Storage Spaces management provider. If this service is stopped or disabled, Storage Spaces cannot be managed.
* Group: NT AUTHORITY\NetworkService
* Dependencies: ['RPCSS']
* Executable File Path: `C:\Windows\System32\svchost.exe -k smphost`

---
# **Service name: InstallService**
## Display name: Microsoft Store Install Service
> Provides infrastructure support for the Microsoft Store.  This service is started on demand and if disabled then installations will not function properly.
* Group: LocalSystem
* Dependencies: ['rpcss']
* Executable File Path: `C:\Windows\System32\svchost.exe -k netsvcs -p`

---
# **Service name: uhssvc**
## Display name: Microsoft Update Health Service
> Maintains Update Health
* Group: LocalSystem
* Dependencies: ['EventLog']
* Executable File Path: `"C:\Program Files\Microsoft Update Health Tools\uhssvc.exe"`

---
# **Service name: SmsRouter**
## Display name: Microsoft Windows SMS Router Service.
> Routes messages based on rules to appropriate clients.
* Group: NT Authority\LocalService
* Dependencies: ['RpcSs']
* Executable File Path: `C:\Windows\system32\svchost.exe -k LocalServiceNetworkRestricted -p`

---
# **Service name: MSiSCSI**
## Display name: Microsoft iSCSI Initiator Service
> Manages Internet SCSI (iSCSI) sessions from this computer to remote iSCSI target devices. If this service is stopped, this computer will not be able to login or access iSCSI targets. If this service is disabled, any services that explicitly depend on it will fail to start.
* Group: LocalSystem
* Dependencies: None
* Executable File Path: `C:\Windows\system32\svchost.exe -k netsvcs -p`

---
# **Service name: NVDisplay.ContainerLocalSystem**
## Display name: NVIDIA Display Container LS
> Container service for NVIDIA root features
* Group: LocalSystem
* Dependencies: None
* Executable File Path: `C:\Windows\System32\DriverStore\FileRepository\nv_dispi.inf_amd64_d1bd230cd08e7436\Display.NvContainer\NVDisplay.Container.exe -s NVDisplay.ContainerLocalSystem -f C:\ProgramData\NVIDIA\NVDisplay.ContainerLocalSystem.log -l 3 -d C:\Windows\System32\DriverStore\FileRepository\nv_dispi.inf_amd64_d1bd230cd08e7436\Display.NvContainer\plugins\LocalSystem -r -p 30000 -cfg NVDisplay.ContainerLocalSystem\LocalSystem`

---
# **Service name: FvSvc**
## Display name: NVIDIA FrameView SDK service
> NVIDIA FrameView SDK service
* Group: LocalSystem
* Dependencies: None
* Executable File Path: `"C:\Program Files\NVIDIA Corporation\FrameViewSDK\nvfvsdksvc_x64.exe" -service`

---
# **Service name: NvContainerLocalSystem**
## Display name: NVIDIA LocalSystem Container
> Container service for NVIDIA root features
* Group: LocalSystem
* Dependencies: None
* Executable File Path: `"C:\Program Files\NVIDIA Corporation\NvContainer\nvcontainer.exe" -s NvContainerLocalSystem -a -f "C:\ProgramData\NVIDIA\NvContainerLocalSystem.log" -l 3 -d "C:\Program Files\NVIDIA Corporation\NvContainer\plugins\LocalSystem" -r -p 30000 -st "C:\Program Files\NVIDIA Corporation\NvContainer\NvContainerTelemetryApi.dll"`

---
# **Service name: NaturalAuthentication**
## Display name: Natural Authentication
> Signal aggregator service, that evaluates signals based on time, network, geolocation, bluetooth and cdf factors. Supported features are Device Unlock, Dynamic Lock and Dynamo MDM policies
* Group: LocalSystem
* Dependencies: ['RpcSs', 'ProfSvc', 'Schedule']
* Executable File Path: `C:\Windows\system32\svchost.exe -k netsvcs -p`

---
# **Service name: NetTcpPortSharing**
## Display name: Net.Tcp Port Sharing Service
> Provides ability to share TCP ports over the net.tcp protocol.
* Group: NT AUTHORITY\LocalService
* Dependencies: None
* Executable File Path: `C:\Windows\Microsoft.NET\Framework64\v4.0.30319\SMSvcHost.exe`

---
# **Service name: Netlogon**
## Display name: Netlogon
> Maintains a secure channel between this computer and the domain controller for authenticating users and services. If this service is stopped, the computer may not authenticate users and services and the domain controller cannot register DNS records. If this service is disabled, any services that explicitly depend on it will fail to start.
* Group: LocalSystem
* Dependencies: ['LanmanWorkstation']
* Executable File Path: `C:\Windows\system32\lsass.exe`

---
# **Service name: NcdAutoSetup**
## Display name: Network Connected Devices Auto-Setup
> Network Connected Devices Auto-Setup service monitors and installs qualified devices that connect to a qualified network. Stopping or disabling this service will prevent Windows from discovering and installing qualified network connected devices automatically. Users can still manually add network connected devices to a PC through the user interface.
* Group: NT AUTHORITY\LocalService
* Dependencies: ['netprofm']
* Executable File Path: `C:\Windows\System32\svchost.exe -k LocalServiceNoNetwork -p`

---
# **Service name: NcbService**
## Display name: Network Connection Broker
> Brokers connections that allow Windows Store Apps to receive notifications from the internet.
* Group: LocalSystem
* Dependencies: ['RpcSS', 'tcpip', 'BrokerInfrastructure']
* Executable File Path: `C:\Windows\System32\svchost.exe -k LocalSystemNetworkRestricted -p`

---
# **Service name: Netman**
## Display name: Network Connections
> Manages objects in the Network and Dial-Up Connections folder, in which you can view both local area network and remote connections.
* Group: LocalSystem
* Dependencies: ['RpcSs', 'nsi']
* Executable File Path: `C:\Windows\System32\svchost.exe -k LocalSystemNetworkRestricted -p`

---
# **Service name: NcaSvc**
## Display name: Network Connectivity Assistant
> Provides DirectAccess status notification for UI components
* Group: LocalSystem
* Dependencies: ['BFE', 'dnscache', 'NSI', 'iphlpsvc']
* Executable File Path: `C:\Windows\System32\svchost.exe -k NetSvcs -p`

---
# **Service name: netprofm**
## Display name: Network List Service
> Identifies the networks to which the computer has connected, collects and stores properties for these networks, and notifies applications when these properties change.
* Group: NT AUTHORITY\LocalService
* Dependencies: ['RpcSs', 'nlasvc']
* Executable File Path: `C:\Windows\System32\svchost.exe -k LocalService -p`

---
# **Service name: NlaSvc**
## Display name: Network Location Awareness
> Collects and stores configuration information for the network and notifies programs when this information is modified. If this service is stopped, configuration information might be unavailable. If this service is disabled, any services that explicitly depend on it will fail to start.
* Group: NT AUTHORITY\NetworkService
* Dependencies: ['NSI', 'RpcSs', 'TcpIp', 'Dhcp', 'Eventlog']
* Executable File Path: `C:\Windows\System32\svchost.exe -k NetworkService -p`

---
# **Service name: NetSetupSvc**
## Display name: Network Setup Service
> The Network Setup Service manages the installation of network drivers and permits the configuration of low-level network settings.  If this service is stopped, any driver installations that are in-progress may be cancelled.
* Group: LocalSystem
* Dependencies: ['RpcSs']
* Executable File Path: `C:\Windows\System32\svchost.exe -k netsvcs -p`

---
# **Service name: nsi**
## Display name: Network Store Interface Service
> This service delivers network notifications (e.g. interface addition/deleting etc) to user mode clients. Stopping this service will cause loss of network connectivity. If this service is disabled, any other services that explicitly depend on this service will fail to start.
* Group: NT Authority\LocalService
* Dependencies: ['rpcss', 'nsiproxy']
* Executable File Path: `C:\Windows\system32\svchost.exe -k LocalService -p`

---
# **Service name: nvagent**
## Display name: Network Virtualization Service
> Provides network virtualization services.
* Group: LocalSystem
* Dependencies: None
* Executable File Path: `C:\Windows\system32\svchost.exe -k NetSvcs`

---
# **Service name: OneSyncSvc_47ac3**
## Display name: OneSyncSvc_47ac3
> This service synchronizes mail, contacts, calendar and various other user data. Mail and other applications dependent on this functionality will not work properly when this service is not running.
* Group: None
* Dependencies: None
* Executable File Path: `C:\Windows\system32\svchost.exe -k UnistackSvcGroup`

---
# **Service name: ssh-agent**
## Display name: OpenSSH Authentication Agent
> Agent to hold private keys used for public key authentication.
* Group: LocalSystem
* Dependencies: None
* Executable File Path: `C:\Windows\System32\OpenSSH\ssh-agent.exe`

---
# **Service name: defragsvc**
## Display name: Optimize drives
> Helps the computer run more efficiently by optimizing files on storage drives.
* Group: localSystem
* Dependencies: ['RPCSS']
* Executable File Path: `C:\Windows\system32\svchost.exe -k defragsvc`

---
# **Service name: PNRPAutoReg**
## Display name: PNRP Machine Name Publication Service
> This service publishes a machine name using the Peer Name Resolution Protocol.  Configuration is managed via the netsh context 'p2p pnrp peer' 
* Group: NT AUTHORITY\LocalService
* Dependencies: ['pnrpsvc']
* Executable File Path: `C:\Windows\System32\svchost.exe -k LocalServicePeerNet`

---
# **Service name: WpcMonSvc**
## Display name: Parental Controls
> Enforces parental controls for child accounts in Windows. If this service is stopped or disabled, parental controls may not be enforced.
* Group: LocalSystem
* Dependencies: None
* Executable File Path: `C:\Windows\system32\svchost.exe -k LocalService`

---
# **Service name: SEMgrSvc**
## Display name: Payments and NFC/SE Manager
> 
* Group: NT AUTHORITY\LocalService
* Dependencies: ['RpcSs']
* Executable File Path: `C:\Windows\system32\svchost.exe -k LocalService -p`

---
# **Service name: PNRPsvc**
## Display name: Peer Name Resolution Protocol
> Manages payments and Near Field Communication (NFC) based secure elements.
* Group: NT AUTHORITY\LocalService
* Dependencies: ['p2pimsvc']
* Executable File Path: `C:\Windows\System32\svchost.exe -k LocalServicePeerNet`

---
# **Service name: p2psvc**
## Display name: Peer Networking Grouping
> Enables multi-party communication using Peer-to-Peer Grouping.  If disabled, some applications, such as HomeGroup, may not function.
* Group: NT AUTHORITY\LocalService
* Dependencies: ['p2pimsvc', 'PNRPSvc']
* Executable File Path: `C:\Windows\System32\svchost.exe -k LocalServicePeerNet`

---
# **Service name: p2pimsvc**
## Display name: Peer Networking Identity Manager
> Provides identity services for the Peer Name Resolution Protocol (PNRP) and Peer-to-Peer Grouping services.  If disabled, the Peer Name Resolution Protocol (PNRP) and Peer-to-Peer Grouping services may not function, and some applications, such as HomeGroup and Remote Assistance, may not function correctly.
* Group: NT AUTHORITY\LocalService
* Dependencies: None
* Executable File Path: `C:\Windows\System32\svchost.exe -k LocalServicePeerNet`

---
# **Service name: PerfHost**
## Display name: Performance Counter DLL Host
> Enables remote users and 64-bit processes to query performance counters provided by 32-bit DLLs. If this service is stopped, only local users and 32-bit processes will be able to query performance counters provided by 32-bit DLLs.
* Group: NT AUTHORITY\LocalService
* Dependencies: ['RPCSS']
* Executable File Path: `C:\Windows\SysWow64\perfhost.exe`

---
# **Service name: pla**
## Display name: Performance Logs & Alerts
> Performance Logs and Alerts Collects performance data from local or remote computers based on preconfigured schedule parameters, then writes the data to a log or triggers an alert. If this service is stopped, performance information will not be collected. If this service is disabled, any services that explicitly depend on it will fail to start.
* Group: NT AUTHORITY\LocalService
* Dependencies: ['RPCSS']
* Executable File Path: `C:\Windows\System32\svchost.exe -k LocalServiceNoNetwork -p`

---
# **Service name: PhoneSvc**
## Display name: Phone Service
> 
* Group: NT Authority\LocalService
* Dependencies: ['RpcSs']
* Executable File Path: `C:\Windows\system32\svchost.exe -k LocalService -p`

---
# **Service name: PimIndexMaintenanceSvc_47ac3**
## Display name: PimIndexMaintenanceSvc_47ac3
> Manages the telephony state on the device
* Group: None
* Dependencies: None
* Executable File Path: `C:\Windows\system32\svchost.exe -k UnistackSvcGroup`

---
# **Service name: PlugPlay**
## Display name: Plug and Play
> Enables a computer to recognize and adapt to hardware changes with little or no user input. Stopping or disabling this service will result in system instability.
* Group: LocalSystem
* Dependencies: None
* Executable File Path: `C:\Windows\system32\svchost.exe -k DcomLaunch -p`

---
# **Service name: WPDBusEnum**
## Display name: Portable Device Enumerator Service
> Enforces group policy for removable mass-storage devices. Enables applications such as Windows Media Player and Image Import Wizard to transfer and synchronize content using removable mass-storage devices.
* Group: LocalSystem
* Dependencies: ['RpcSs']
* Executable File Path: `C:\Windows\system32\svchost.exe -k LocalSystemNetworkRestricted`

---
# **Service name: Power**
## Display name: Power
> Manages power policy and power policy notification delivery.
* Group: LocalSystem
* Dependencies: None
* Executable File Path: `C:\Windows\system32\svchost.exe -k DcomLaunch -p`

---
# **Service name: Spooler**
## Display name: Print Spooler
> This service spools print jobs and handles interaction with the printer.  If you turn off this service, you won’t be able to print or see your printers.
* Group: LocalSystem
* Dependencies: ['RPCSS', 'http']
* Executable File Path: `C:\Windows\System32\spoolsv.exe`

---
# **Service name: PrintWorkflowUserSvc_47ac3**
## Display name: PrintWorkflowUserSvc_47ac3
> Provides support for Print Workflow applications. If you turn off this service, you may not be able to print successfully.
* Group: None
* Dependencies: None
* Executable File Path: `C:\Windows\system32\svchost.exe -k PrintWorkflow`

---
# **Service name: PrintNotify**
## Display name: Printer Extensions and Notifications
> This service opens custom printer dialog boxes and handles notifications from a remote print server or a printer. If you turn off this service, you won’t be able to see printer extensions or notifications.
* Group: LocalSystem
* Dependencies: ['RpcSs']
* Executable File Path: `C:\Windows\system32\svchost.exe -k print`

---
# **Service name: wercplsupport**
## Display name: Problem Reports Control Panel Support
> This service provides support for viewing, sending and deletion of system-level problem reports for the Problem Reports control panel.
* Group: localSystem
* Dependencies: None
* Executable File Path: `C:\Windows\System32\svchost.exe -k netsvcs -p`

---
# **Service name: PcaSvc**
## Display name: Program Compatibility Assistant Service
> This service provides support for the Program Compatibility Assistant (PCA).  PCA monitors programs installed and run by the user and detects known compatibility problems. If this service is stopped, PCA will not function properly.
* Group: LocalSystem
* Dependencies: ['RpcSs']
* Executable File Path: `C:\Windows\system32\svchost.exe -k LocalSystemNetworkRestricted -p`

---
# **Service name: QWAVE**
## Display name: Quality Windows Audio Video Experience
> Quality Windows Audio Video Experience (qWave) is a networking platform for Audio Video (AV) streaming applications on IP home networks. qWave enhances AV streaming performance and reliability by ensuring network quality-of-service (QoS) for AV applications. It provides mechanisms for admission control, run time monitoring and enforcement, application feedback, and traffic prioritization.
* Group: NT AUTHORITY\LocalService
* Dependencies: ['rpcss', 'psched', 'QWAVEdrv', 'LLTDIO']
* Executable File Path: `C:\Windows\system32\svchost.exe -k LocalServiceAndNoImpersonation -p`

---
# **Service name: RpcEptMapper**
## Display name: RPC Endpoint Mapper
> Resolves RPC interfaces identifiers to transport endpoints. If this service is stopped or disabled, programs using Remote Procedure Call (RPC) services will not function properly.
* Group: NT AUTHORITY\NetworkService
* Dependencies: None
* Executable File Path: `C:\Windows\system32\svchost.exe -k RPCSS -p`

---
# **Service name: RmSvc**
## Display name: Radio Management Service
> Radio Management and Airplane Mode Service
* Group: NT AUTHORITY\LocalService
* Dependencies: ['RpcSs']
* Executable File Path: `C:\Windows\System32\svchost.exe -k LocalServiceNetworkRestricted`

---
# **Service name: RtkAudioUniversalService**
## Display name: Realtek Audio Universal Service
> Realtek Audio Universal Service
* Group: LocalSystem
* Dependencies: None
* Executable File Path: `"C:\Windows\System32\RtkAudUService64.exe"`

---
# **Service name: TroubleshootingSvc**
## Display name: Recommended Troubleshooting Service
> Enables automatic mitigation for known problems by applying recommended troubleshooting. If stopped, your device will not get recommended troubleshooting for problems on your device.
* Group: LocalSystem
* Dependencies: ['rpcss']
* Executable File Path: `C:\Windows\system32\svchost.exe -k netsvcs -p`

---
# **Service name: RasAuto**
## Display name: Remote Access Auto Connection Manager
> Creates a connection to a remote network whenever a program references a remote DNS or NetBIOS name or address.
* Group: localSystem
* Dependencies: ['RasAcd']
* Executable File Path: `C:\Windows\System32\svchost.exe -k netsvcs -p`

---
# **Service name: RasMan**
## Display name: Remote Access Connection Manager
> Manages dial-up and virtual private network (VPN) connections from this computer to the Internet or other remote networks. If this service is disabled, any services that explicitly depend on it will fail to start.
* Group: localSystem
* Dependencies: ['SstpSvc']
* Executable File Path: `C:\Windows\System32\svchost.exe -k netsvcs`

---
# **Service name: SessionEnv**
## Display name: Remote Desktop Configuration
> Remote Desktop Configuration service (RDCS) is responsible for all Remote Desktop Services and Remote Desktop related configuration and session maintenance activities that require SYSTEM context. These include per-session temporary folders, RD themes, and RD certificates.
* Group: localSystem
* Dependencies: ['RPCSS', 'LanmanWorkstation']
* Executable File Path: `C:\Windows\System32\svchost.exe -k netsvcs -p`

---
# **Service name: TermService**
## Display name: Remote Desktop Services
> Allows users to connect interactively to a remote computer. Remote Desktop and Remote Desktop Session Host Server depend on this service.  To prevent remote use of this computer, clear the checkboxes on the Remote tab of the System properties control panel item.
* Group: NT Authority\NetworkService
* Dependencies: ['RPCSS']
* Executable File Path: `C:\Windows\System32\svchost.exe -k NetworkService`

---
# **Service name: UmRdpService**
## Display name: Remote Desktop Services UserMode Port Redirector
> Allows the redirection of Printers/Drives/Ports for RDP connections
* Group: localSystem
* Dependencies: ['TermService', 'RDPDR']
* Executable File Path: `C:\Windows\System32\svchost.exe -k LocalSystemNetworkRestricted -p`

---
# **Service name: RpcSs**
## Display name: Remote Procedure Call (RPC)
> The RPCSS service is the Service Control Manager for COM and DCOM servers. It performs object activations requests, object exporter resolutions and distributed garbage collection for COM and DCOM servers. If this service is stopped or disabled, programs using COM or DCOM will not function properly. It is strongly recommended that you have the RPCSS service running.
* Group: NT AUTHORITY\NetworkService
* Dependencies: ['RpcEptMapper', 'DcomLaunch']
* Executable File Path: `C:\Windows\system32\svchost.exe -k rpcss -p`

---
# **Service name: RpcLocator**
## Display name: Remote Procedure Call (RPC) Locator
> In Windows 2003 and earlier versions of Windows, the Remote Procedure Call (RPC) Locator service manages the RPC name service database. In Windows Vista and later versions of Windows, this service does not provide any functionality and is present for application compatibility.
* Group: NT AUTHORITY\NetworkService
* Dependencies: None
* Executable File Path: `C:\Windows\system32\locator.exe`

---
# **Service name: RemoteRegistry**
## Display name: Remote Registry
> Enables remote users to modify registry settings on this computer. If this service is stopped, the registry can be modified only by users on this computer. If this service is disabled, any services that explicitly depend on it will fail to start.
* Group: NT AUTHORITY\LocalService
* Dependencies: ['RPCSS']
* Executable File Path: `C:\Windows\system32\svchost.exe -k localService -p`

---
# **Service name: RemoteAccess**
## Display name: Routing and Remote Access
> Offers routing services to businesses in local area and wide area network environments.
* Group: localSystem
* Dependencies: ['RpcSS', 'Bfe', 'RasMan', 'Http', '+NetBIOSGroup']
* Executable File Path: `C:\Windows\System32\svchost.exe -k netsvcs`

---
# **Service name: SNMPTRAP**
## Display name: SNMP Trap
> Receives trap messages generated by local or remote Simple Network Management Protocol (SNMP) agents and forwards the messages to SNMP management programs running on this computer. If this service is stopped, SNMP-based programs on this computer will not receive SNMP trap messages. If this service is disabled, any services that explicitly depend on it will fail to start.
* Group: NT AUTHORITY\LocalService
* Dependencies: None
* Executable File Path: `C:\Windows\System32\snmptrap.exe`

---
# **Service name: SSDPSRV**
## Display name: SSDP Discovery
> Discovers networked devices and services that use the SSDP discovery protocol, such as UPnP devices. Also announces SSDP devices and services running on the local computer. If this service is stopped, SSDP-based devices will not be discovered. If this service is disabled, any services that explicitly depend on it will fail to start.
* Group: NT AUTHORITY\LocalService
* Dependencies: ['HTTP', 'NSI']
* Executable File Path: `C:\Windows\system32\svchost.exe -k LocalServiceAndNoImpersonation -p`

---
# **Service name: seclogon**
## Display name: Secondary Logon
> 
* Group: LocalSystem
* Dependencies: None
* Executable File Path: `C:\Windows\system32\svchost.exe -k netsvcs -p`

---
# **Service name: SstpSvc**
## Display name: Secure Socket Tunneling Protocol Service
> 
* Group: NT Authority\LocalService
* Dependencies: None
* Executable File Path: `C:\Windows\system32\svchost.exe -k LocalService -p`

---
# **Service name: SamSs**
## Display name: Security Accounts Manager
> 
* Group: LocalSystem
* Dependencies: ['RPCSS']
* Executable File Path: `C:\Windows\system32\lsass.exe`

---
# **Service name: wscsvc**
## Display name: Security Center
> 
* Group: NT AUTHORITY\LocalService
* Dependencies: ['RpcSs']
* Executable File Path: `C:\Windows\System32\svchost.exe -k LocalServiceNetworkRestricted -p`

---
# **Service name: SensorDataService**
## Display name: Sensor Data Service
> 
* Group: LocalSystem
* Dependencies: None
* Executable File Path: `C:\Windows\System32\SensorDataService.exe`

---
# **Service name: SensrSvc**
## Display name: Sensor Monitoring Service
> 
* Group: NT AUTHORITY\LocalService
* Dependencies: None
* Executable File Path: `C:\Windows\system32\svchost.exe -k LocalServiceAndNoImpersonation -p`

---
# **Service name: SensorService**
## Display name: Sensor Service
> 
* Group: LocalSystem
* Dependencies: None
* Executable File Path: `C:\Windows\system32\svchost.exe -k LocalSystemNetworkRestricted -p`

---
# **Service name: LanmanServer**
## Display name: Server
> 
* Group: LocalSystem
* Dependencies: ['SamSS', 'Srv2']
* Executable File Path: `C:\Windows\system32\svchost.exe -k netsvcs -p`

---
# **Service name: shpamsvc**
## Display name: Shared PC Account Manager
> 
* Group: LocalSystem
* Dependencies: ['RpcSs', 'ProfSvc']
* Executable File Path: `C:\Windows\System32\svchost.exe -k netsvcs -p`

---
# **Service name: ShellHWDetection**
## Display name: Shell Hardware Detection
> 
* Group: LocalSystem
* Dependencies: ['RpcSs']
* Executable File Path: `C:\Windows\System32\svchost.exe -k netsvcs -p`

---
# **Service name: SCardSvr**
## Display name: Smart Card
> 
* Group: NT AUTHORITY\LocalService
* Dependencies: None
* Executable File Path: `C:\Windows\system32\svchost.exe -k LocalServiceAndNoImpersonation`

---
# **Service name: ScDeviceEnum**
## Display name: Smart Card Device Enumeration Service
> 
* Group: LocalSystem
* Dependencies: None
* Executable File Path: `C:\Windows\system32\svchost.exe -k LocalSystemNetworkRestricted`

---
# **Service name: SCPolicySvc**
## Display name: Smart Card Removal Policy
> 
* Group: LocalSystem
* Dependencies: ['RpcSs']
* Executable File Path: `C:\Windows\system32\svchost.exe -k netsvcs`

---
# **Service name: sppsvc**
## Display name: Software Protection
> 
* Group: NT AUTHORITY\NetworkService
* Dependencies: ['RpcSs']
* Executable File Path: `C:\Windows\system32\sppsvc.exe`

---
# **Service name: SharedRealitySvc**
## Display name: Spatial Data Service
> 
* Group: NT AUTHORITY\LocalService
* Dependencies: ['RpcSS']
* Executable File Path: `C:\Windows\system32\svchost.exe -k LocalService -p`

---
# **Service name: svsvc**
## Display name: Spot Verifier
> 
* Group: LocalSystem
* Dependencies: None
* Executable File Path: `C:\Windows\system32\svchost.exe -k LocalSystemNetworkRestricted -p`

---
# **Service name: StateRepository**
## Display name: State Repository Service
> 
* Group: LocalSystem
* Dependencies: ['rpcss']
* Executable File Path: `C:\Windows\system32\svchost.exe -k appmodel -p`

---
# **Service name: Steam Client Service**
## Display name: Steam Client Service
> 
* Group: LocalSystem
* Dependencies: None
* Executable File Path: `"C:\Program Files (x86)\Common Files\Steam\steamservice.exe" /RunAsService`

---
# **Service name: WiaRpc**
## Display name: Still Image Acquisition Events
> 
* Group: LocalSystem
* Dependencies: ['RpcSs']
* Executable File Path: `C:\Windows\system32\svchost.exe -k LocalSystemNetworkRestricted -p`

---
# **Service name: StorSvc**
## Display name: Storage Service
> 
* Group: LocalSystem
* Dependencies: None
* Executable File Path: `C:\Windows\System32\svchost.exe -k LocalSystemNetworkRestricted -p`

---
# **Service name: TieringEngineService**
## Display name: Storage Tiers Management
> 
* Group: localSystem
* Dependencies: None
* Executable File Path: `C:\Windows\system32\TieringEngineService.exe`

---
# **Service name: SysMain**
## Display name: SysMain
> 
* Group: LocalSystem
* Dependencies: ['rpcss', 'fileinfo']
* Executable File Path: `C:\Windows\system32\svchost.exe -k LocalSystemNetworkRestricted -p`

---
# **Service name: SENS**
## Display name: System Event Notification Service
> 
* Group: LocalSystem
* Dependencies: ['EventSystem']
* Executable File Path: `C:\Windows\system32\svchost.exe -k netsvcs -p`

---
# **Service name: SystemEventsBroker**
## Display name: System Events Broker
> 
* Group: LocalSystem
* Dependencies: ['RpcEptMapper', 'RpcSs']
* Executable File Path: `C:\Windows\system32\svchost.exe -k DcomLaunch -p`

---
# **Service name: SgrmBroker**
## Display name: System Guard Runtime Monitor Broker
> 
* Group: LocalSystem
* Dependencies: ['RpcSs']
* Executable File Path: `C:\Windows\system32\SgrmBroker.exe`

---
# **Service name: lmhosts**
## Display name: TCP/IP NetBIOS Helper
> 
* Group: NT AUTHORITY\LocalService
* Dependencies: ['Afd']
* Executable File Path: `C:\Windows\System32\svchost.exe -k LocalServiceNetworkRestricted -p`

---
# **Service name: Schedule**
## Display name: Task Scheduler
> 
* Group: LocalSystem
* Dependencies: ['RPCSS', 'SystemEventsBroker']
* Executable File Path: `C:\Windows\system32\svchost.exe -k netsvcs -p`

---
# **Service name: TapiSrv**
## Display name: Telephony
> 
* Group: NT AUTHORITY\NetworkService
* Dependencies: ['RpcSs']
* Executable File Path: `C:\Windows\System32\svchost.exe -k NetworkService -p`

---
# **Service name: Themes**
## Display name: Themes
> 
* Group: LocalSystem
* Dependencies: None
* Executable File Path: `C:\Windows\System32\svchost.exe -k netsvcs -p`

---
# **Service name: TimeBrokerSvc**
## Display name: Time Broker
> 
* Group: NT AUTHORITY\LocalService
* Dependencies: None
* Executable File Path: `C:\Windows\system32\svchost.exe -k LocalServiceNetworkRestricted -p`

---
# **Service name: TabletInputService**
## Display name: Touch Keyboard and Handwriting Panel Service
> 
* Group: LocalSystem
* Dependencies: ['RpcSs']
* Executable File Path: `C:\Windows\System32\svchost.exe -k LocalSystemNetworkRestricted -p`

---
# **Service name: upnphost**
## Display name: UPnP Device Host
> 
* Group: NT AUTHORITY\LocalService
* Dependencies: ['SSDPSRV', 'HTTP']
* Executable File Path: `C:\Windows\system32\svchost.exe -k LocalServiceAndNoImpersonation -p`

---
# **Service name: UdkUserSvc_47ac3**
## Display name: UdkUserSvc_47ac3
> 
* Group: None
* Dependencies: None
* Executable File Path: `C:\Windows\system32\svchost.exe -k UdkSvcGroup`

---
# **Service name: UnistoreSvc_47ac3**
## Display name: UnistoreSvc_47ac3
> 
* Group: None
* Dependencies: None
* Executable File Path: `C:\Windows\System32\svchost.exe -k UnistackSvcGroup`

---
# **Service name: UsoSvc**
## Display name: Update Orchestrator Service
> 
* Group: LocalSystem
* Dependencies: ['rpcss']
* Executable File Path: `C:\Windows\system32\svchost.exe -k netsvcs -p`

---
# **Service name: UserManager**
## Display name: User Manager
> 
* Group: LocalSystem
* Dependencies: ['RpcSs', 'ProfSvc']
* Executable File Path: `C:\Windows\system32\svchost.exe -k netsvcs -p`

---
# **Service name: ProfSvc**
## Display name: User Profile Service
> 
* Group: LocalSystem
* Dependencies: ['RpcSs']
* Executable File Path: `C:\Windows\system32\svchost.exe -k netsvcs -p`

---
# **Service name: UserDataSvc_47ac3**
## Display name: UserDataSvc_47ac3
> 
* Group: None
* Dependencies: None
* Executable File Path: `C:\Windows\system32\svchost.exe -k UnistackSvcGroup`

---
# **Service name: vds**
## Display name: Virtual Disk
> 
* Group: LocalSystem
* Dependencies: ['RpcSs']
* Executable File Path: `C:\Windows\System32\vds.exe`

---
# **Service name: VSStandardCollectorService150**
## Display name: Visual Studio Standard Collector Service 150
> 
* Group: LocalSystem
* Dependencies: None
* Executable File Path: `"C:\Program Files (x86)\Microsoft Visual Studio\Shared\Common\DiagnosticsHub.Collection.Service\StandardCollector.Service.exe"`

---
# **Service name: VSS**
## Display name: Volume Shadow Copy
> 
* Group: LocalSystem
* Dependencies: ['RPCSS']
* Executable File Path: `C:\Windows\system32\vssvc.exe`

---
# **Service name: VacSvc**
## Display name: Volumetric Audio Compositor Service
> 
* Group: NT AUTHORITY\LocalService
* Dependencies: ['RpcSs']
* Executable File Path: `C:\Windows\System32\svchost.exe -k LocalServiceNetworkRestricted -p`

---
# **Service name: WlanSvc**
## Display name: WLAN AutoConfig
> 
* Group: LocalSystem
* Dependencies: ['nativewifip', 'RpcSs', 'Ndisuio', 'wcmsvc']
* Executable File Path: `C:\Windows\system32\svchost.exe -k LocalSystemNetworkRestricted -p`

---
# **Service name: wmiApSrv**
## Display name: WMI Performance Adapter
> 
* Group: localSystem
* Dependencies: None
* Executable File Path: `C:\Windows\system32\wbem\WmiApSrv.exe`

---
# **Service name: WwanSvc**
## Display name: WWAN AutoConfig
> 
* Group: localSystem
* Dependencies: ['RpcSs', 'NdisUio']
* Executable File Path: `C:\Windows\system32\svchost.exe -k LocalSystemNetworkRestricted -p`

---
# **Service name: WalletService**
## Display name: WalletService
> 
* Group: LocalSystem
* Dependencies: None
* Executable File Path: `C:\Windows\System32\svchost.exe -k appmodel -p`

---
# **Service name: Wallpaper Engine Service**
## Display name: Wallpaper Engine Service
> 
* Group: LocalSystem
* Dependencies: None
* Executable File Path: `"D:\Steam\steamapps\common\wallpaper_engine\bin\wallpaperservice32_c.exe"`

---
# **Service name: WarpJITSvc**
## Display name: WarpJITSvc
> 
* Group: NT Authority\LocalService
* Dependencies: None
* Executable File Path: `C:\Windows\System32\svchost.exe -k LocalServiceNetworkRestricted`

---
# **Service name: TokenBroker**
## Display name: Web Account Manager
> 
* Group: LocalSystem
* Dependencies: ['UserManager']
* Executable File Path: `C:\Windows\system32\svchost.exe -k netsvcs -p`

---
# **Service name: WebClient**
## Display name: WebClient
> 
* Group: NT AUTHORITY\LocalService
* Dependencies: ['MRxDAV']
* Executable File Path: `C:\Windows\system32\svchost.exe -k LocalService -p`

---
# **Service name: WFDSConMgrSvc**
## Display name: Wi-Fi Direct Services Connection Manager Service
> 
* Group: NT AUTHORITY\LocalService
* Dependencies: ['RpcSs']
* Executable File Path: `C:\Windows\system32\svchost.exe -k LocalServiceNetworkRestricted -p`

---
# **Service name: WinHttpAutoProxySvc**
## Display name: WinHTTP Web Proxy Auto-Discovery Service
> 
* Group: NT AUTHORITY\LocalService
* Dependencies: ['Dhcp']
* Executable File Path: `C:\Windows\system32\svchost.exe -k LocalServiceNetworkRestricted -p`

---
# **Service name: Audiosrv**
## Display name: Windows Audio
> 
* Group: NT AUTHORITY\LocalService
* Dependencies: ['AudioEndpointBuilder', 'RpcSs']
* Executable File Path: `C:\Windows\System32\svchost.exe -k LocalServiceNetworkRestricted -p`

---
# **Service name: AudioEndpointBuilder**
## Display name: Windows Audio Endpoint Builder
> 
* Group: LocalSystem
* Dependencies: None
* Executable File Path: `C:\Windows\System32\svchost.exe -k LocalSystemNetworkRestricted -p`

---
# **Service name: SDRSVC**
## Display name: Windows Backup
> 
* Group: localSystem
* Dependencies: ['RPCSS']
* Executable File Path: `C:\Windows\system32\svchost.exe -k SDRSVC`

---
# **Service name: WbioSrvc**
## Display name: Windows Biometric Service
> 
* Group: LocalSystem
* Dependencies: ['RpcSs']
* Executable File Path: `C:\Windows\system32\svchost.exe -k WbioSvcGroup`

---
# **Service name: FrameServer**
## Display name: Windows Camera Frame Server
> 
* Group: LocalSystem
* Dependencies: ['rpcss']
* Executable File Path: `C:\Windows\System32\svchost.exe -k Camera`

---
# **Service name: wcncsvc**
## Display name: Windows Connect Now - Config Registrar
> 
* Group: NT AUTHORITY\LocalService
* Dependencies: ['rpcss']
* Executable File Path: `C:\Windows\System32\svchost.exe -k LocalServiceAndNoImpersonation -p`

---
# **Service name: Wcmsvc**
## Display name: Windows Connection Manager
> 
* Group: NT Authority\LocalService
* Dependencies: ['RpcSs', 'NSI']
* Executable File Path: `C:\Windows\system32\svchost.exe -k LocalServiceNetworkRestricted -p`

---
# **Service name: mpssvc**
## Display name: Windows Defender Firewall
> 
* Group: NT Authority\LocalService
* Dependencies: ['mpsdrv', 'bfe']
* Executable File Path: `C:\Windows\system32\svchost.exe -k LocalServiceNoNetworkFirewall -p`

---
# **Service name: WEPHOSTSVC**
## Display name: Windows Encryption Provider Host Service
> 
* Group: NT AUTHORITY\LocalService
* Dependencies: ['rpcss']
* Executable File Path: `C:\Windows\system32\svchost.exe -k WepHostSvcGroup`

---
# **Service name: WerSvc**
## Display name: Windows Error Reporting Service
> 
* Group: localSystem
* Dependencies: None
* Executable File Path: `C:\Windows\System32\svchost.exe -k WerSvcGroup`

---
# **Service name: Wecsvc**
## Display name: Windows Event Collector
> 
* Group: NT AUTHORITY\NetworkService
* Dependencies: ['HTTP', 'Eventlog']
* Executable File Path: `C:\Windows\system32\svchost.exe -k NetworkService -p`

---
# **Service name: EventLog**
## Display name: Windows Event Log
> 
* Group: NT AUTHORITY\LocalService
* Dependencies: None
* Executable File Path: `C:\Windows\System32\svchost.exe -k LocalServiceNetworkRestricted -p`

---
# **Service name: FontCache**
## Display name: Windows Font Cache Service
> 
* Group: NT AUTHORITY\LocalService
* Dependencies: None
* Executable File Path: `C:\Windows\system32\svchost.exe -k LocalService -p`

---
# **Service name: stisvc**
## Display name: Windows Image Acquisition (WIA)
> 
* Group: NT Authority\LocalService
* Dependencies: ['RpcSs']
* Executable File Path: `C:\Windows\system32\svchost.exe -k imgsvc`

---
# **Service name: wisvc**
## Display name: Windows Insider Service
> 
* Group: LocalSystem
* Dependencies: ['rpcss']
* Executable File Path: `C:\Windows\system32\svchost.exe -k netsvcs -p`

---
# **Service name: msiserver**
## Display name: Windows Installer
> 
* Group: LocalSystem
* Dependencies: ['rpcss']
* Executable File Path: `C:\Windows\system32\msiexec.exe /V`

---
# **Service name: LicenseManager**
## Display name: Windows License Manager Service
> 
* Group: NT Authority\LocalService
* Dependencies: ['rpcss']
* Executable File Path: `C:\Windows\System32\svchost.exe -k LocalService -p`

---
# **Service name: Winmgmt**
## Display name: Windows Management Instrumentation
> 
* Group: localSystem
* Dependencies: ['RPCSS']
* Executable File Path: `C:\Windows\system32\svchost.exe -k netsvcs -p`

---
# **Service name: WManSvc**
## Display name: Windows Management Service
> 
* Group: LocalSystem
* Dependencies: ['rpcss']
* Executable File Path: `C:\Windows\system32\svchost.exe -k netsvcs -p`

---
# **Service name: WMPNetworkSvc**
## Display name: Windows Media Player Network Sharing Service
> 
* Group: NT AUTHORITY\NetworkService
* Dependencies: ['http', 'WSearch']
* Executable File Path: `"C:\Program Files\Windows Media Player\wmpnetwk.exe"`

---
# **Service name: MixedRealityOpenXRSvc**
## Display name: Windows Mixed Reality OpenXR Service
> 
* Group: LocalSystem
* Dependencies: ['rpcss']
* Executable File Path: `C:\Windows\system32\svchost.exe -k LocalSystemNetworkRestricted -p`

---
# **Service name: icssvc**
## Display name: Windows Mobile Hotspot Service
> 
* Group: NT Authority\LocalService
* Dependencies: ['RpcSs', 'wcmsvc']
* Executable File Path: `C:\Windows\system32\svchost.exe -k LocalServiceNetworkRestricted -p`

---
# **Service name: TrustedInstaller**
## Display name: Windows Modules Installer
> 
* Group: localSystem
* Dependencies: None
* Executable File Path: `C:\Windows\servicing\TrustedInstaller.exe`

---
# **Service name: spectrum**
## Display name: Windows Perception Service
> 
* Group: NT AUTHORITY\LocalService
* Dependencies: ['rpcss']
* Executable File Path: `C:\Windows\system32\spectrum.exe`

---
# **Service name: perceptionsimulation**
## Display name: Windows Perception Simulation Service
> 
* Group: LocalSystem
* Dependencies: ['rpcss']
* Executable File Path: `C:\Windows\system32\PerceptionSimulation\PerceptionSimulationService.exe`

---
# **Service name: FontCache3.0.0.0**
## Display name: Windows Presentation Foundation Font Cache 3.0.0.0
> 
* Group: NT Authority\LocalService
* Dependencies: None
* Executable File Path: `C:\Windows\Microsoft.Net\Framework64\v3.0\WPF\PresentationFontCache.exe`

---
# **Service name: WpnService**
## Display name: Windows Push Notifications System Service
> 
* Group: LocalSystem
* Dependencies: ['rpcss']
* Executable File Path: `C:\Windows\system32\svchost.exe -k netsvcs -p`

---
# **Service name: PushToInstall**
## Display name: Windows PushToInstall Service
> 
* Group: LocalSystem
* Dependencies: ['rpcss']
* Executable File Path: `C:\Windows\System32\svchost.exe -k netsvcs -p`

---
# **Service name: WinRM**
## Display name: Windows Remote Management (WS-Management)
> 
* Group: NT AUTHORITY\NetworkService
* Dependencies: ['RPCSS', 'HTTP']
* Executable File Path: `C:\Windows\System32\svchost.exe -k NetworkService -p`

---
# **Service name: WSearch**
## Display name: Windows Search
> 
* Group: LocalSystem
* Dependencies: ['RPCSS', 'BrokerInfrastructure']
* Executable File Path: `C:\Windows\system32\SearchIndexer.exe /Embedding`

---
# **Service name: SecurityHealthService**
## Display name: Windows Security Service
> 
* Group: LocalSystem
* Dependencies: ['RpcSs']
* Executable File Path: `C:\Windows\system32\SecurityHealthService.exe`

---
# **Service name: W32Time**
## Display name: Windows Time
> 
* Group: NT AUTHORITY\LocalService
* Dependencies: None
* Executable File Path: `C:\Windows\system32\svchost.exe -k LocalService`

---
# **Service name: wuauserv**
## Display name: Windows Update
> 
* Group: LocalSystem
* Dependencies: ['rpcss']
* Executable File Path: `C:\Windows\system32\svchost.exe -k netsvcs -p`

---
# **Service name: WaaSMedicSvc**
## Display name: Windows Update Medic Service
> 
* Group: LocalSystem
* Dependencies: ['rpcss']
* Executable File Path: `C:\Windows\system32\svchost.exe -k wusvcs -p`

---
# **Service name: dot3svc**
## Display name: Wired AutoConfig
> 
* Group: localSystem
* Dependencies: ['RpcSs', 'Ndisuio', 'Eaphost']
* Executable File Path: `C:\Windows\system32\svchost.exe -k LocalSystemNetworkRestricted -p`

---
# **Service name: workfolderssvc**
## Display name: Work Folders
> 
* Group: NT AUTHORITY\LocalService
* Dependencies: ['RpcSs', 'wsearch']
* Executable File Path: `C:\Windows\System32\svchost.exe -k LocalService -p`

---
# **Service name: LanmanWorkstation**
## Display name: Workstation
> 
* Group: NT AUTHORITY\NetworkService
* Dependencies: ['Bowser', 'MRxSmb20', 'NSI']
* Executable File Path: `C:\Windows\System32\svchost.exe -k NetworkService -p`

---
# **Service name: WpnUserService_47ac3**
## Display name: WpnUserService_47ac3
> 
* Group: None
* Dependencies: None
* Executable File Path: `C:\Windows\system32\svchost.exe -k UnistackSvcGroup`

---
# **Service name: XboxGipSvc**
## Display name: Xbox Accessory Management Service
> 
* Group: LocalSystem
* Dependencies: None
* Executable File Path: `C:\Windows\system32\svchost.exe -k netsvcs -p`

---
# **Service name: XblAuthManager**
## Display name: Xbox Live Auth Manager
> 
* Group: LocalSystem
* Dependencies: ['RpcSs']
* Executable File Path: `C:\Windows\system32\svchost.exe -k netsvcs -p`

---
# **Service name: XblGameSave**
## Display name: Xbox Live Game Save
> 
* Group: LocalSystem
* Dependencies: ['UserManager', 'XblAuthManager']
* Executable File Path: `C:\Windows\system32\svchost.exe -k netsvcs -p`

---
# **Service name: XboxNetApiSvc**
## Display name: Xbox Live Networking Service
> 
* Group: LocalSystem
* Dependencies: ['BFE', 'mpssvc', 'IKEEXT', 'KeyIso']
* Executable File Path: `C:\Windows\system32\svchost.exe -k netsvcs -p`

---
# **Service name: cbdhsvc_47ac3**
## Display name: cbdhsvc_47ac3
> 
* Group: None
* Dependencies: None
* Executable File Path: `C:\Windows\system32\svchost.exe -k ClipboardSvcGroup -p`

---
# **Service name: dcsvc**
## Display name: dcsvc
> 
* Group: LocalSystem
* Dependencies: ['rpcss']
* Executable File Path: `C:\Windows\system32\svchost.exe -k netsvcs -p`

---
# **Service name: WslService**
## Display name: ms-resource:AppName
> 
* Group: LocalSystem
* Dependencies: ['staterepository']
* Executable File Path: `C:\Program Files\WindowsApps\MicrosoftCorporationII.WindowsSubsystemForLinux_1.0.3.0_x64__8wekyb3d8bbwe\wslservice.exe`