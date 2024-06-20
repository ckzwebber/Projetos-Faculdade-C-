#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    int a[5], i, z, x;

    printf("\nDigite 5 numeros: \n");

    for (i = 0; i < 5; i++)
    {

        scanf("%d", &a[i]);
        printf("\n");
    }

    printf("Os valores informados sao: \n");

    for (z = 0; z < 5; z++)
    {
        printf("a[%d] = %d \n", z, a[z]);
    }

    printf("\n -------- \n");

    printf("Em ordem inversa, os valores sao: \n");

    for (x = 4; x > -1; x--)
    {
        printf("a[%d] = %d \n", x, a[x]);
    }

    return 0;
}