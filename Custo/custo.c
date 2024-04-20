#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    float custo_fabrica, porcentagem_distribuidor, porcentagem_impostos, preco_final;

    printf("Digite o custo de fabrica do carro: \n");
    scanf("%f", &custo_fabrica);

    if (custo_fabrica <= 15000)
    {
        porcentagem_distribuidor = 0.05;
        porcentagem_impostos = 0;
    }
    else if (custo_fabrica <= 25000)
    {
        porcentagem_distribuidor = 0.1;
        porcentagem_impostos = 0.15;
    }
    else
    {
        porcentagem_distribuidor = 0.15;
        porcentagem_impostos = 0.20;
    }

    preco_final = custo_fabrica + (custo_fabrica * porcentagem_distribuidor) + (custo_fabrica * porcentagem_impostos);
    printf("O preco final do carro e: %.2f\n", preco_final);

    return 0;
    system("pause");
}