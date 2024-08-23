#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char string[30];
    int i, tamanhoString, quantidadePalavras = 1;

    printf("Digite uma string: ");
    gets(string);

    tamanhoString = strlen(string);

    for (i = 1; i < tamanhoString; i++)
    {
        if (string[i] == ' ')
        {
            if (isalpha(string[i + 1]))
            {
                quantidadePalavras++;
            }
        }
    }

    if (string[0] == NULL)
    {
        quantidadePalavras--;
    }

    printf("A quantidade de palavras e: %d \n", quantidadePalavras);

    return 0;
}