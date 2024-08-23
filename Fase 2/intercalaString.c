#include <stdio.h>
#include <string.h>

int main(void)
{
    char S1[30], S2[30];
    int i, tamanhoS1 = 0, tamanhoS2 = 0, tamanhoJuncao = 0;

    printf("Digite duas strings: ");
    gets(S1);

    printf("A outra: ");
    gets(S2);

    tamanhoS1 = strlen(S1);
    tamanhoS2 = strlen(S2);
    tamanhoJuncao = tamanhoS1 + tamanhoS2;

    char juncao[tamanhoJuncao];

    for (i = 0; i < tamanhoJuncao; i++)
    {
        if (i % 2 == 0)
        {
            juncao[i] = S1[i];
        }
        else
        {
            juncao[i] = S2[i];
        }
    }

    printf("A juncao das strings e: %s.", juncao);
}