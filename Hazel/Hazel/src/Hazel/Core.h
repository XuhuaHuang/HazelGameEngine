#pragma once

/**
 * HZ_PLATFORM_WINDOWS and HZ_BUILD_DLL are added to the project properties of Hazel.
 * Project -> Project Properties -> Configuration Properties -> C/C++ -> Preprocessor
 */

#ifdef HZ_PLATFORM_WINDOWS
	#ifdef HZ_BUILD_DLL
		#define HAZEL_API __declspec(dllexport)
	#else
		#define HAZEL_API __declspec(dllimport)
	#endif // HZ_BUILD_DLL
#else
	#error Hazel only supports Windows!

#endif