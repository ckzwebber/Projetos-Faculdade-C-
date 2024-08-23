#include <stdio.h>
#include <string.h>

int main(void)
{
    char string[30];
    int i, tamanhoString, quantidadeModificados = 0;

    printf("Digite uma string: ");
    gets(string);

    tamanhoString = strlen(string);

    for (i = 0; i < tamanhoString; i++)
    {
        if (string[i] == 'a')
        {
            string[i] = 'b';
            quantidadeModificados++;
        }
    }

    printf("A nova string e: %s.\n", string);
    printf("A quantidade de modificacoes e: %d.\n", quantidadeModificados);

    return 0;
}