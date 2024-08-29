#include <stdio.h>
int parOuImpar(int numero);

int main(void)
{
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);
    printf("%d", parOuImpar(numero));
}

int parOuImpar(int numero)
{
    if (numero % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}