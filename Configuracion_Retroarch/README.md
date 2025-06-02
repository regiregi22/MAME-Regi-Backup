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



