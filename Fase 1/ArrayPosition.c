#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    int numbers[15], i;

    printf("\nDigite 15 numeros: \n");

    for (i = 0; i < 15; i++)
    {
        scanf("%d", &numbers[i]);
    }

    for (i = 0; i < 15; i++)
    {
        if (numbers[i] == 30)
        {
            printf("Foi digitado o numero 30 na posicao %d.\n", i + 1);
        }
    }

    return 0;
}