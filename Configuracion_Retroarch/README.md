
------------------------
CONFIGURACIÓN RETROARCH  


# PARA MINIMA LATENCIA  
------------------------
## PARA MINIMA LATENCIA  
------------------------
### OPCIONES RECOMENDADAS  
------------------------
#### OPCIONES RECOMENDADASsssss  
------------------------

	User interface	Pause content when not active: OFF								
		Appearance	Primary Thumbnail OFF							
			Opacity 500							
		Menu Item Visibility: Set each one								
			Quick Menu: Set each one							
		Notification Visibility:	Display Netplay Ping: ON							
			Extra Netplay Notifications: ON							
		File Browser:								
			Start Directory: Start directory: H:\EMU\							
			Show Hidden Files and Directories: ON							
			Filter Unknown Extensions: OFF							
			Remember Last Used Start Directory: ON
							
	User	Username: Abogado								
		Privacy	Discord presence: ON							
										
		Accounts	Retroachivements	User and Pass						
			Username							
							CRT			
	Video	Output	Video: Vulkan				Monitor Index: 2			
			Video Rotation: Normal				Screen resolution: 640x480			
			Set Display-Reported Refresh Rate: Set				Vert. Refresh rate: 60hz			
			Automatic Refresh Rate Switch: OFF							
		Scaling	Aspect Ratio: Full				Integer Scale: ON		 	
			Integer Scale: OFF				Integer Scale Axis: Y+X			
		Synchronization	VSync: ON				Integer Scale Scaling: Smart			
			Max Swapchain Images: 2							
			Automatic frame delay: ON							
			Frame delay: Auto							
			Sync to Exact Content Framerate (G-Sync, Freesync): ON				Sync to Exact Content Framerate (G-Sync, Freesync): OFF			
		Fullscreen mode	Windowed Fullscreen Mode: OFF							
										
	Core	Allow Rotation: OFF					Allow Rotation: ON			
										
	Audio	Output	Audio drive: Change to WASAPI if xaudio don't work							
			Resampler Quality: Highest							
		Microphone	OFF							
										
	Input									
		Maximum Users: 2								
		Reserved Device: None (si se pone, a veces se buguea retroarch y no arranca)								
		Hotkeys	Hotkey Enable: Ctrl							
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
