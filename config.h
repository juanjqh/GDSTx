#ifdef TEENSYDUINO
 
	#define SizeEVE              7   // NHD: 7-7",  5-5", 43-4.3", 35-3.5", Riverdi: 51-5", 71-7", MO: 38-3.8"FT813, MO: 52-5"BT815, MO: 53-5"FT813, Riverdi: 54-5"  BT817, 0 Riverdi FT801/FT800 4.3", Riverdi: 100-10" BT817
	#define ORIENTACION     	 0   // 0, 1, 2, 3, FT81X/BT81X   0 normal  
	#define ROTACION        	 0   // 0,1         FT80x

    #define CS 			        10   // general
	#define SetSPISpeed   36000000   // general
	#define NHDTouch 		     1    // 1 cargar rutinas panel táctil    0 NHD normal aparentemente no lo requiere?¿
	#define GameduinoX           0   // 1 gameduinox shield instalado  0 otros como NHD43 o FT843
		
#endif

#if defined(ARDUINO_ARCH_STM32) 

    #define STM32_CPU         4073    // 103-M3DEMO-F103C8, 767-NucleoF767, 411-F411CE,  746-Core7XXI,  4073-M4DEMO-F407VG   STM32-Danieleff and SdFatV2       7670-CoreOfficialSTM32-v190  7460-CoreOfficialSTM32-v190

	#define SizeEVE      	     5    // NHD: 7-7",  5-5", 43-4.3", 35-3.5", Riverdi: 51-5", 71-7", MO: 38-3.8"FT813, MO: 52-5"BT815, MO: 53-5"FT813, Riverdi: 54-5"  BT817, 0 Riverdi FT801/FT800 4.3", Riverdi: 100-10" BT817
	#define ORIENTACION     	 0    // 0, 1, 2, 3, FT81X/BT81X   0 normal  1-MO38
	#define ROTACION        	 0    // 0,1         FT80x
	
	#define CS 			       PA4    // general
	#define SetSPISpeed   36000000    // general
	#define NHDTouch 		     1    // 1 cargar rutinas panel táctil    0 NHD normal aparentemente no lo requiere?¿ usar en STM32 cuando falle EEPROM externa

    #define GameduinoX           0   // 1 gameduinox shield instalado  0 otros como NHD43 o FT843

#endif

#if defined(ARDUINO_ARCH_AURIX) 

    #define SizeEVE              7   // NHD: 7-7",  5-5", 43-4.3", 35-3.5", Riverdi: 51-5", 71-7", MO: 38-3.8"FT813, MO: 52-5"BT815, MO: 53-5"FT813, Riverdi: 54-5"  BT817, 0 Riverdi FT801/FT800 4.3", Riverdi: 100-10" BT817
	#define ORIENTACION     	 0   // 0, 1, 2, 3, FT81X/BT81X   0 normal  
	#define ROTACION        	 0   // 0,1         FT80x
    #define POR_PIN              9
    #define CS 			        10   // general
	#define SetSPISpeed  10000000   // general
	#define NHDTouch 		     1    // 1 cargar rutinas panel táctil    0 NHD normal aparentemente no lo requiere?¿
	#define GameduinoX           0   // 1 gameduinox shield instalado  0 otros como NHD43 o FT843
#endif

#if defined(ARDUINO_TEENSY32)
  #define SD_PIN 			 	 5    //under test
#endif