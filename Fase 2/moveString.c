#include <stdio.h>
#include <string.h>

int main(void)
{
    char string[30], start;
    int i, tamanhoString;

    printf("Digite uma string: ");
    gets(string);

    tamanhoString = strlen(string);

    start = string[0];

    for (i = 1; i < tamanhoString; i++)
    {
        string[i - 1] = string[i];
    }

    string[tamanhoString - 1] = start;

    printf("A nova string e: %s \n", string);

    return 0;
}