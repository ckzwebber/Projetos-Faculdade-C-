#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    float codigo_produto, quantidade_produto, valor_produto, valor_total;

    printf("Digite o codigo do produto: \n");
    scanf("%f", &codigo_produto);

    printf("Digite a quantidade do produto: \n");
    scanf("%f", &quantidade_produto);

    if (codigo_produto >= 1 && codigo_produto <= 10)
    {
        valor_produto = 10.00;
        valor_total = valor_produto * quantidade_produto;
        printf("O preco unitario do produto e: %.2f\n", valor_produto);
        printf("O valor total da compra e: %.2f\n", valor_total);
    }
    else if (codigo_produto >= 11 && codigo_produto <= 20)
    {
        valor_produto = 15.00;
        valor_total = valor_produto * quantidade_produto;
        printf("O preco unitario do produto e: %.2f\n", valor_produto);
        printf("O valor total da compra e: %.2f\n", valor_total);
    }
    else if (codigo_produto >= 21 && codigo_produto <= 30)
    {
        valor_produto = 20.00;
        valor_total = valor_produto * quantidade_produto;
        printf("O preco unitario do produto e: %.2f\n", valor_produto);
        printf("O valor total da compra e: %.2f\n", valor_total);
    }
    else if (codigo_produto >= 31 && codigo_produto <= 40)
    {
        valor_produto = 30.00;
        valor_total = valor_produto * quantidade_produto;
        printf("O preco unitario do produto e: %.2f\n", valor_produto);
        printf("O valor total da compra e: %.2f\n", valor_total);
    }
    else
    {
        printf("Codigo invalido!");
    }

    if (valor_total < 250.00)
    {
        valor_total = valor_total - (valor_total * 0.05);
        printf("O valor total da compra com desconto e: %.2f\n", valor_total);
    }
    else if (valor_total < 500.00)
    {
        valor_total = valor_total - (valor_total * 0.10);
        printf("O valor total da compra com desconto e: %.2f\n", valor_total);
    }
    else if (valor_total > 500.00)
    {
        valor_total = valor_total - (valor_total * 0.15);
        printf("O valor total da compra com desconto e: %.2f\n", valor_total);
    }
    else
    {
        printf("O valor total da compra e: %.2f\n", valor_total);
    }

    return 0;
    system("pause");
}