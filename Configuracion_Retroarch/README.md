# CONFIGURACIÓN RETROARCH  
Esta es la configuración que tengo en Retroarch.
Hay algunos emuladores complejos que dan problemas con el Runahead para reducir latencia (PSX, MAME y alguno más), si suena como a trompicones el audio, desactivar el Runahead cuando se usen.


## -Para mínima latencia:  
	Video	Output	Video: Vulkan							
			Set Display-Reported Refresh Rate: Set						
			Automatic Refresh Rate Switch: OFF
		Synchronization	VSync: ON						
			Max Swapchain Images: 2							
			Automatic frame delay: ON							
			Frame delay: Auto							
			Sync to Exact Content Framerate (G-Sync, Freesync): ON						
		Fullscreen mode	Windowed Fullscreen Mode: OFF		
Latency																					
		Run-Ahead: Single Instance Mode								
		Runahead frames: 1								
		Use second instance Run-Ahead: OFF	
  
## -Otras:	

User interface	Pause content when not active: OFF								
	
Notification Visibility:	Display Netplay Ping: ON							
			Extra Netplay Notifications: ON							
		File Browser:														
			Show Hidden Files and Directories: ON							
			Filter Unknown Extensions: OFF							
			Remember Last Used Start Directory: ON
							
						
							
Audio	Output	Audio drive: Change to WASAPI if xaudio don't work							
			Resampler Quality: Highest							
					
														
										
							
										
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
										
Achievements: ON	Visibility	Startup Summary: All Identified Games							
		Unlock Sound:	ON							
										
Online Updater	Core Downloader, download as needed								
		Update everything (Core info, Assets, etc...)								
										
-CONFIG CORES:	FinalBurn Neo	Vertical mode: OFF								
		Allow patched romsets: OFF								
	Copy BIOS folter to "system" folder in Retroarch									
										
-CRT SHADERS:		Delete folder "/RetroArch-Win64/shaders/shaders_slang/bezel/Mega_Bezel"								
			Select "\RetroArch-Win64\shaders\shaders_slang\bezel\Mega_Bezel\Presets\MBZ__0__SMOOTH-ADV.slangp" to have some upscale smoothing							
			Select "\RetroArch-Win64\shaders\shaders_slang\bezel\Mega_Bezel\Presets\MBZ__1__ADV.slangp" for no smoothing, for pure pixel perfect							
		On "\RetroArch-Win64\shaders folder", create folder "Mega_Bezel_Packs"								
			Extract https://github.com/Duimon/Duimon-Mega-Bezel							
