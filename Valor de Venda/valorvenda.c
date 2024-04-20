#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    float valor_compra, valor_venda;

    printf("Digite o valor da compra: ");
    scanf("%f", &valor_compra);

    if (valor_compra < 10)
    {
        valor_venda = valor_compra * 1.7;
    }
    else if (valor_compra < 30)
    {
        valor_venda = valor_compra * 1.5;
    }
    else if (valor_compra < 50)
    {
        valor_venda = valor_compra * 1.4;
    }
    else
    {
        valor_venda = valor_compra * 1.3;
    }

    printf("O valor de venda e de R$ %.2f\n", valor_venda);

    system("pause");
    return 0;
}