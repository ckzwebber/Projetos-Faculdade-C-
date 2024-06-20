#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    int numbersA[5], i;

    printf("\nDigite 5 numeros: \n");

    for (i = 0; i < 5; i++)
    {

        scanf("%d", &numbersA[i]);
    }

    printf("\n");

    for (i = 0; i < 5; i++)
    {

        numbersA[i] = numbersA[i] * 3;
    }

    printf("\n");
    printf("O triplo do vetor e: \n");

    for (i = 0; i < 5; i++)
    {

        printf("%d \t", numbersA[i]);
    }

    return 0;
}