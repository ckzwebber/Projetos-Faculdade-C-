#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    int numero;

    printf("Digite um numero: \n");
    scanf("%d", &numero);

    if (numero % 5 == 0 && numero % 2 == 0)
    {
        printf("O numero %d e multiplo de 10, 5 e de 2!", numero);
    }
    else
    {
        printf("O numero %d nao e multiplo de 10, 5 e de 2!", numero);
    }
    system("pause");
    return 0;
}