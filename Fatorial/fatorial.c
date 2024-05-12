#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int numero, i, fatorial;
    fatorial = 1;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    if (numero >= 0)
    {
        for (i = 1; i <= numero; i++)
        {
            fatorial *= i;
        }
    }
    else
    {
        printf("Invalido!");
        return 1;
    }
    printf("O fatorial e: %d", fatorial);

    return 0;
}