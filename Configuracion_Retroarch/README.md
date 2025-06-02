## Configuración para mínima latencia con Retroarch:  
Hay algún core moderno que da problemas con el "Runahead" para reducir latencia (PSX, MAME y alguno más), si el video y el audio van a tirones, desactivar el Runahead cuando se use ese core.  
Si tu monitor tiene G-Sync/Freesync, recuerda habilitarlo tambien en el panel de control de Nvidia, y en el propio menú del monitor.

Video / Output / Video: Vulkan  
Video / Output / Set Display-Reported Refresh Rate: Set  
Video / Output / Automatic Refresh Rate Switch: OFF  
Video / Synchronization	/ VSync: ON  
Video / Synchronization	/ Max Swapchain Images: 2  
Video / Synchronization	/ Automatic frame delay: ON  
Video / Synchronization	/ Frame delay: Auto  
Video / Synchronization	/ Sync to Exact Content Framerate (G-Sync, Freesync): ON  
Video / Fullscreen mode	/ Windowed Fullscreen Mode: OFF  
Latency / Run-Ahead: Single Instance Mode  
Latency / Runahead frames: 1  
Latency / Use second instance Run-Ahead: OFF  
Audio / Output / Audio driver: XAUDIO (Usar WASAPI si XAUDIO da problemas de sonido)  
Audio / Output / Resampler Quality: Highest  
<br />
<br />
## Configuración para Retroachievements:  
User / Accounts / Retroachivements: USUARIO Y CONTRASEÑA  
User / Privacy / Discord presence: ON  
Achievements / ON  
Achievements / Visibility / Startup Summary: All Identified Games  
Achievements / Unlock Sound: ON  


## Configuración de core FinalBurnNEO:
Para que este core coja los logros en modo hardcore, la primera vez que se carga un juego hay que salir al menú (F1), Core Options, y poner "Allow patched romsets: OFF". Reiniciar emulador. 


## Actualizar:
-Cada varias semanas, actualizar los cores para que funcione correctamente Retroachievements:  
Online Updater / Update Installed cores  
Online Updater / Update Core Info Files  
Online Updater / Update Assets  
Online Updater / Update Controller Profiles  
Online Updater / Update Databases  

-Al menos una vez al año, actualizar el propio Retroarch:  
Desde su web (https://www.retroarch.com), si lo tenemos mediante instalador, bajarse la nueva version e instalarla. Si lo tenemos descomprimido en una carpeta, descargarnos la nueva versión y descomprimirla sobreescribiendo la carpeta donde lo tenemos.  


----------------------------------  

----------------------------------  

## BONUS - CONFIGURACIÓN COMPLETA:
Esta es la copia de seguridad de mi configuración completa de Retroarch, está todo lo anterior, y muchas más opciones que tengo puestas a mi gusto, por si alguno tiene curiosidad. Está configurado para usar los shaders CRT de MegaBezel.  

User interfacePause content when not active: OFF  
AppearancePrimary Thumbnail OFF  
Opacity 500  
Menu Item Visibility: Set each one  
Quick Menu: Set each one  
Notification Visibility:Display Netplay Ping: ON  
Extra Netplay Notifications: ON  
File Browser:  
Start Directory: Start directory: H:\EMU\  
Show Hidden Files and Directories: ON  
Filter Unknown Extensions: OFF  
Remember Last Used Start Directory: ON  

UserUsername: Abogado  
PrivacyDiscord presence: ON  

AccountsRetroachivementsUser and Pass  
Username  

VideoOutputVideo: Vulkan  
Video Rotation: Normal  
Set Display-Reported Refresh Rate: Set  
Automatic Refresh Rate Switch: OFF  
ScalingAspect Ratio: Full  
Integer Scale: OFF  
SynchronizationVSync: ON  
Max Swapchain Images: 2  
Automatic frame delay: ON  
Frame delay: Auto  
Sync to Exact Content Framerate (G-Sync, Freesync): ON  
Fullscreen modeWindowed Fullscreen Mode: OFF  

CoreAllow Rotation: OFF  

AudioOutputAudio driver: Change to WASAPI if xaudio don't work  
Resampler Quality: Highest  
MicrophoneOFF  

Input  
Maximum Users: 2  
Reserved Device: None (si se pone, a veces se buguea retroarch y no arranca)  
HotkeysHotkey Enable: Ctrl  
Remove uneeded hotkeys  

Latency  
Max Swapchain Images: 2  
Automatic frame delay: ON  
Frame delay: Auto  
Run-Ahead: Single Instance Mode  
Runahead frames: 1  
Use second instance Run-Ahead: OFF  

Saving  
Sort Saves into Folders by Core Name: ON  
Sort Save States into Folders by Core Name: ON  

Network  
Use Relay Server: OFF (Solo con puertos abiertos en router. Sin puertos abiertos en router, y si el NAT Traversal no funciona (uPnP), entonces habilitar el relay server)  
Netplay TCP Port: 55435  
Simultaneous connections: 4  
Fade Chat: OFF  
Allow Slave-Mode Clients: OFF  
Input Latency Frames: 2 (Todos los jugadores deben tener el mismo setting)  
Netplay NAT Traversal: OFF (ya lo he abierto manualmente en el router, habilitar para uPnP)  

Achievements: ONVisibilityStartup Summary: All Identified Games  
Unlock Sound:ON  

Online UpdaterCore Downloader, download as needed  
Update everything (Core info, Assets, etc...)  

FinalBurn NeoVertical mode: OFF  
Allow patched romsets: OFF  
Copy BIOS folter to "system" folder in Retroarch  

Delete folder "/RetroArch-Win64/shaders/shaders_slang/bezel/Mega_Bezel"  
Select "\RetroArch-Win64\shaders\shaders_slang\bezel\Mega_Bezel\Presets\MBZ__0__SMOOTH-ADV.slangp" to have some upscale smoothing  
Select "\RetroArch-Win64\shaders\shaders_slang\bezel\Mega_Bezel\Presets\MBZ__1__ADV.slangp" for no smoothing, for pure pixel perfect  
On "\RetroArch-Win64\shaders folder", create folder "Mega_Bezel_Packs"  
Extract https://github.com/Duimon/Duimon-Mega-Bezel  
