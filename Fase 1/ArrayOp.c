#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    int numbers[5], i, z, x, menor = 999, maior = 0, soma = 0;
    float media;

    printf("\nDigite 5 numeros: \n");

    for (i = 0; i < 5; i++)
    {

        scanf("%d", &numbers[i]);

        if (numbers[i] > maior)
        {
            maior = numbers[i];
        }
        if (numbers[i] < menor)
        {
            menor = numbers[i];
        }
    }

    for (x = 0; x < 5; x++)
    {
        soma += numbers[x];
    }

    media = soma / 5;

    printf("\n");
    printf("Os valores informados sao: \n");

    for (z = 0; z < 5; z++)
    {
        printf("a[%d] = %d \n", z, numbers[z]);
    }

    printf("\n");
    printf("O menor numero: %d\n", menor);
    printf("O maior numero: %d\n", maior);
    printf("A media: %.2f\n", media);

    return 0;
}