#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int numero, i, media, soma, maior, menor;
    soma = 0;
    menor = 999999999;
    maior = 0;
    media = 0;
    numero = 0;

    for (i = 0; i < 5; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &numero);

        soma += numero;

        if (numero > maior)
        {
            maior = numero;
        }
        if (numero < menor)
        {
            menor = numero;
        }
    }
    media = soma / 5;

    printf("O menor numero e: %d.\n", menor);
    printf("O maior numero e: %d.\n", maior);
    printf("A media dos numeros e: %d.", media);

    return 0;
}