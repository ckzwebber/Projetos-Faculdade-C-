#include <stdio.h>

int main(void)
{

    int i, j, matriz[4][5], soma = 0, somaDasLinhas[4], somaDasColunas[5];

    printf("Preencha a matriz: \n");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("Numero -> ");
            scanf("%d", &matriz[i][j]);
        }
    }

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            soma += matriz[i][j];
        }
        somaDasLinhas[i] = soma;
        soma = 0;
    }

    for (j = 0; j < 5; j++)
    {
        for (i = 0; i < 4; i++)
        {
            soma += matriz[i][j];
        }
        somaDasColunas[j] = soma;
        soma = 0;
    }

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("%d \t", matriz[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < 4; i++)
    {
        printf("A soma da linha %d e: %d \n", i + 1, somaDasLinhas[i]);
    }

    printf("\n \n");

    for (j = 0; j < 5; j++)
    {
        printf("A soma da coluna %d e: %d \n", j + 1, somaDasColunas[i]);
    }

    return 0;
}