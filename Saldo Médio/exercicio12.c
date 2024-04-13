#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    float saldo_medio, credito;

    printf("Digite o saldo medio do cliente: \n");
    scanf("%f", &saldo_medio);

    if (saldo_medio <= 2000)
    {
        credito = saldo_medio * 0.1;
    }
    else if (saldo_medio <= 3000)
    {
        credito = saldo_medio * 0.2;
    }
    else if (saldo_medio <= 4000)
    {
        credito = saldo_medio * 0.25;
    }
    else
    {
        credito = saldo_medio * 0.3;
    }
    printf("O saldo medio do cliente e de %2.f reais, portanto o credito disponivel e de %2.f reais!", saldo_medio, credito);

    return 0;
    system("pause");
}