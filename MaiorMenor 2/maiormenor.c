#include <stdio.h>

int main(void)
{
    int numero, maior, menor, media;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    maior = numero;
    menor = numero;

    while (numero != 0)
    {
        printf("Digite outro numero: ");
        scanf("%d", &numero);
        if (numero > maior)
        {
            maior = numero;
        }
        else if (numero < menor)
        {
            menor = numero;
        }
    }
    printf("O maior numero e: %d\n", maior);
    printf("O menor numero e: %d\n", menor);
}