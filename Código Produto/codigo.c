#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int codigo_produto;

    printf("Digite o codigo do produto: ");
    scanf("%d", &codigo_produto);

    switch (codigo_produto)
    {
    case 1:
        printf("Alimento nao perecivel. \n");
        break;

    case 2 ... 4:
        printf("Alimento perecivel. \n");
        break;

    case 5 ... 6:
        printf("Vestuario. \n");
        break;

    case 7:
        printf("Higiene Pessoal. \n");
        break;

    case 8 ... 15:
        printf("Limpeza e Utensilios Domesticos. \n");
        break;

    default:
        printf("Incorreto. \n");
        break;
    }
}