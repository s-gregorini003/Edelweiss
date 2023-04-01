#pragma once

#ifdef EW_PLATFORM_WINDOWS
	#ifdef EW_BUILD_DLL
		#define  EDELWEISS_API  _declspec(dllexport)
	#else
		#define EDELWEISS_API  _declspec(dllimport)
	#endif
#else
	#error Edelweiss only supports Windows!
#endif