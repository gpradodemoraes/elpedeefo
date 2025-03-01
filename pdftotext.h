#pragma once

#ifdef XPDFBUILD_EXPORTS
#define CONVERTPDFTOTEXT_API __declspec(dllexport)
#else
#define CONVERTPDFTOTEXT_API __declspec(dllimport)
#endif

struct gambiarra {
	char *pointer;
	size_t tamanho;
	int posicao;
};
extern "C" CONVERTPDFTOTEXT_API int convertpdftotext(int argc, char* argv[],char **retpointer);
