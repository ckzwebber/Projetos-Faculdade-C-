#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    int numbersA[5], numbersB[5], soma[5], i, z, x;

    printf("\nDigite 5 numeros: \n");

    for (i = 0; i < 5; i++)
    {

        scanf("%d", &numbersA[i]);
    }

    printf("\n");
    printf("\nDigite outros 5 numeros: \n");

    for (z = 0; z < 5; z++)
    {

        scanf("%d", &numbersB[z]);
    }

    for (x = 0; x < 5; x++)
    {
        soma[x] = numbersA[x] + numbersB[x];
    }

    printf("\n");
    printf("A soma dos dois vetores e: ");
    for (i = 0; i < 5; i++)
    {
        printf("%d", soma[i]);
        printf("\t");
    }

    return 0;
}