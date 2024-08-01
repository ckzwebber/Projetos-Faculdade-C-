#include <stdio.h>

int main()
{
    int numeros[7], i;

    printf("Digite sete numeros inteiros:\n");

    for (i = 0; i < 7; i++)
    {
        scanf("%d", &numeros[i]);
    }

    printf("Multiplos de 2:\n");
    for (i = 0; i < 7; i++)
    {
        if (numeros[i] % 2 == 0)
        {
            printf("%d ", numeros[i]);
        }
    }
    printf("\n");

    printf("Multiplos de 3:\n");
    for (i = 0; i < 7; i++)
    {
        if (numeros[i] % 3 == 0)
        {
            printf("%d ", numeros[i]);
        }
    }
    printf("\n");

    printf("Multiplos de 2 e 3:\n");
    for (i = 0; i < 7; i++)
    {
        if (numeros[i] % 2 == 0 && numeros[i] % 3 == 0)
        {
            printf("%d ", numeros[i]);
        }
    }
    printf("\n");

    return 0;
}