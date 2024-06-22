#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    int numbersA[5], numbersB[5], juncaoVetor[10], i;

    printf("\nDigite 5 numeros: \n");

    for (i = 0; i < 5; i++)
    {

        scanf("%d", &numbersA[i]);
        printf("\n");
    }

    printf("\nDigite outros 5 numeros: \n");

    for (i = 0; i < 5; i++)
    {

        scanf("%d", &numbersB[i]);
        printf("\n");
    }

    printf("Os 10 numeros sao: \n");

    for (i = 0; i < 5; i++)
    {
        juncaoVetor[i] = numbersA[i];
        juncaoVetor[i + 5] = numbersB[i];
    }

    for (i = 0; i < 10; i++)
    {
        printf("--- %d ---", juncaoVetor[i]);
        printf("\n");
    }

    return 0;
}