#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    int numbersA[5], numbersB[5], interseccaoVetor[5], i;

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

    printf("Os numeros em comum no vetor sao: \n");

    for (i = 0; i < 5; i++)
    {
        if (numbersA[i] == numbersB[i])
        {
            interseccaoVetor[i] = numbersA[i];
        }
        else
        {
            interseccaoVetor[i] = 0;
        }
        printf("--- %d ---", interseccaoVetor[i]);
        printf("\n");
    }

    return 0;
}