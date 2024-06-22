#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    int numbers[6], i, pares = 0, impares = 0;

    printf("\nDigite 6 numeros: \n");

    for (i = 0; i < 6; i++)
    {

        scanf("%d", &numbers[i]);
    }

    for (i = 0; i < 6; i++)
    {
        if (numbers[i] % 2 == 0)
        {
            pares++;
            printf("O numero %d e par!\n", numbers[i]);
        }
        else
        {
            impares++;
            printf("O numero %d e impar!\n", numbers[i]);
        }
    }
    printf("Quantidade de pares: %d.\n", pares);
    printf("Quantidade de impares: %d.\n", impares);

    return 0;
}