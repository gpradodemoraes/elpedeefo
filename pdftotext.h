#pragma once

#ifdef XPDFBUILD_EXPORTS
#define CONVERTPDFTOTEXT_API __declspec(dllexport)
#else
#define CONVERTPDFTOTEXT_API __declspec(dllimport)
#endif

extern "C" CONVERTPDFTOTEXT_API int convertpdftotext(int argc, char* argv[],char **retpointer);
