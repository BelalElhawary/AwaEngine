#pragma once

#ifdef AWA_PLATFORM_WINDOWS

#ifdef AWA_BUILD_DLL
#define AWA_API __declspec(dllexport)
#else
#define AWA_API __declspec(dllimport)
#endif // AWA_BUILD_DLL

#else

#error Awa only support Windows!

#endif // AWA_PLATFORM_WINDOWS
