#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n, i, triplo, numero;

    printf("\n");
    printf("Digite a quantidade de numeros a serem lidos: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        printf("\n");
        printf("Digite o numero: ", i);
        scanf("%d", &numero);
        triplo = numero * 3;
        printf("O triplo do numero %d e: %d\n", numero, triplo);
        printf("\n");
    }
}