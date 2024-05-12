#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, numero, pares, impares;
    pares = 0;
    impares = 0;

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
    printf("Quantidade de numeros pares: %d\n", pares);
    printf("Quantidade de numeros impares: %d\n", impares);
    return 0;
}