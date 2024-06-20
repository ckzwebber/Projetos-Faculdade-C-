#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    float preco_produto, categoria_produto, situacao_produto, aumento, novo_preco, imposto;

    printf("Digite o preco do produto: \n");
    scanf("%f", &preco_produto);

    printf("Digite a categoria do produto: \n");
    printf("1 - Limpeza \n");
    printf("2 - Alimentacao \n");
    printf("3 - Vestuario \n");
    scanf("%f", &categoria_produto);

    printf("Digite a situacao do produto: \n");
    printf("1 - Necessita refrigeracao \n");
    printf("2 - Nao necessita refrigeracao \n");
    scanf("%f", &situacao_produto);

    if (preco_produto <= 25)
    {
        if (categoria_produto == 1)
        {
            aumento = 0.05;
        }
        else if (categoria_produto == 2)
        {
            aumento = 0.08;
        }
        else if (categoria_produto == 3)
        {
            aumento = 0.10;
        }
    }
    else
    {
        if (categoria_produto == 1)
        {
            aumento = 0.12;
        }
        else if (categoria_produto == 2)
        {
            aumento = 0.15;
        }
        else if (categoria_produto == 3)
        {
            aumento = 0.18;
        }
    }

    if (categoria_produto == 2 || situacao_produto == 1)
    {
        imposto = 0.05;
    }
    else
    {
        imposto = 0.08;
    }

    novo_preco = preco_produto + (preco_produto * aumento) - (preco_produto * imposto);

    if (novo_preco <= 50)
    {
        printf("Barato \n");
    }
    else if (novo_preco < 120)
    {
        printf("Normal \n");
    }
    else
    {
        printf("Caro \n");
    }

    return 0;
    system("pause");
}