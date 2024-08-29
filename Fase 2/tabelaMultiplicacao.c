#include <stdio.h>

int renderizarTabela(int numero)
{
    if (numero < 1 || numero > 9)
    {
        return printf("Digite um numero valido.");
    }

    int i, j;

    for (i = 1; i <= numero; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ", i * j);
        }
        printf("\n");
    }
}

int main(void)
{
    int numero;

    printf("Digite um numero de 1 a 9: ");
    scanf("%d", &numero);

    renderizarTabela(numero);
}