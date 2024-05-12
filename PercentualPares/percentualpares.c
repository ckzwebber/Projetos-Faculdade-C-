#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, numero;
    float pares, impares;
    pares = 0;
    impares = 0;

    float percentual_pares = 0.0;

    for (i = 0; i < 5; i++)
    {
        printf("Digite um numero inteiro: ");
        scanf("%d", &numero);

        if (numero % 2 == 0)
        {
            pares++;
        }
        else
        {
            impares++;
        }
    }
    percentual_pares = pares / 5 * 100;
    printf("O percentual de numeros pares e: %2.f", percentual_pares);
    return 0;
}