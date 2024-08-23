#include <stdio.h>
#include <string.h>

int main(void)
{
    char frase[50];
    int i, tamanhoString, quantidadeX = 0;

    printf("Digite uma frase: ");
    gets(frase);

    tamanhoString = strlen(frase);

    for (i = 0; i < tamanhoString; i++)
    {
        if (frase[i] == 'x' || frase[i] == 'X')
        {
            quantidadeX++;
        }
    }

    printf("A quantidade de X's na frase e: %d.\n", quantidadeX);
    return 0;
}