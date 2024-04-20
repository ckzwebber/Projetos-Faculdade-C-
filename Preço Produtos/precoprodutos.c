#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    float preco_produto, novo_preco, classificacao;

    printf("Digite o preco do produto: \n");
    scanf("%f", &preco_produto);

    if (preco_produto <= 50)
    {

        novo_preco = preco_produto * 1.05;
    }
    else if (preco_produto <= 100)
    {
        novo_preco = preco_produto * 1.10;
    }
    else
    {
        novo_preco = preco_produto * 1.15;
    }

    printf("O novo preco do produto e: %.2f\n", novo_preco);

    if (novo_preco <= 80)
    {
        printf("Classificacao: Barato\n");
    }
    else if (novo_preco < 120)
    {
        printf("Classificacao: Normal\n");
    }
    else if (novo_preco < 200)
    {

        printf("Classificacao: Caro\n");
    }
    else
    {
        printf("Classificacao: Muito caro\n");
    }

    system("pause");
    return 0;
}