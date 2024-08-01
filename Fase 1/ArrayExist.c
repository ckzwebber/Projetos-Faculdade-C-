#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, numeros[15];

    for (i = 0; i < 15; i++)
    {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    for (i = 0; i < 15; i++)
    {
        if (numeros[i] == 30)
        {
            printf("Existe um numero 30 na posicao: %d.", i + 1);
        }
    }
}