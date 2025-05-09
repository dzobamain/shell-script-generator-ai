#include <stdlib.h>
#include <string.h>
#include <Python.h>
#include "input.h"
#include "../program_config.h"

char* GetUserResponse()
{
    char* text = (char*)malloc(LENGHT_USER_TEXT * sizeof(char));
    if (!text) {
        printf("Error: Memory allocation failed\n");
        return NULL;
    }

    printf("\033[0;34mUser: \033[0m");
    fgets(text, LENGHT_USER_TEXT, stdin);
    text[strcspn(text, "\n")] = '\0';

    return text;
}

int CheckInput(const char* text, const char* sumbol)
{
    int check = 1;

    if (text == NULL || strcmp(text, sumbol) == 0) {
        check = 0;
    }

    return check;
}