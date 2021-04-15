#pragma once

#ifdef VA_PLATFORM_WINDOWS
	#ifdef VA_BUILD_DLL
		#define VETRA_API __declspec(dllexport)
	#else
		#define VETRA_API __declspec(dllimport)
	#endif
#else
	#error Vetra only supports windows!
#endif