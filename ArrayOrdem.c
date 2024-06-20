#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    int numbers[7], i, z;

    printf("\nDigite 7 numeros: \n");

    for (i = 0; i < 7; i++)
    {

        scanf("%d", &numbers[i]);
        printf("\n");
    }

    printf("Os numeros sao: \n");

    for (z = 0; z < 7; z++)
    {
        printf("--- %d ---", numbers[z]);
        printf("\n");
    }
    return 0;
}