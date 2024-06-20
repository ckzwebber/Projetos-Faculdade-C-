#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    int numbers[5], i, posicao_negativo = 0;

    printf("\nDigite 5 numeros: \n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &numbers[i]);

        if (numbers[i] < 0)
        {
            posicao_negativo = i + 1;
        }
    }

    if (posicao_negativo == 0)
    {
        printf("\nNegativo nao encontrado.\n");
    }
    else
    {
        printf("\nO numero negativo esta na posicao %d.\n", posicao_negativo);
    }
}