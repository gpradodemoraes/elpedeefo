#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "pdftotext.h"


int main() {
    printf("TESTANDO CONVERSOR DE PDF\n");
    char errortext[1024];
    const char *argumentsbase[] = {
        "scriptcallername",
        "-table",
        "-enc","UTF-8",
        "-eol","unix"
    };
    int argumentssize = sizeof(argumentsbase) / sizeof(argumentsbase[0]);
    char **arguments = malloc(sizeof(argumentsbase[0]) * (argumentssize + 1));
    char *elpedfpointer = NULL;

    arguments[6] = (char*)malloc(1024);

    for(int i = 0; i < argumentssize; i++) {
    	*(arguments + i) = (char*) argumentsbase[i];
        printf("%d => %s\n", i, *(arguments + i));
    }

    strcpy_s(arguments[6], 1024, "../teste_pdf.pdf");
    printf("%d => %s\n", 6, *(arguments + 6));

    if((convertpdftotext(
    argumentssize + 1,
    (char**)arguments,&elpedfpointer) != 0)) {
        sprintf_s(errortext, 200, "erro: não foi possível converter o arquivo %s", arguments[6]);
        return 5;
    }
    printf("====================================\n%s\n====================================\n", elpedfpointer);
    free(arguments[6]);
    free(arguments);
    free(elpedfpointer);
    return 0;
}
