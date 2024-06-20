#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float n1, n2, operacao;

    printf("Digite dois numeros: \n");
    scanf("%f", &n1);
    scanf("%f", &n2);

    printf("Escolha uma operacao para esses numeros: \n");
    printf("1. Media entre os numeros digitados. \n");
    printf("2. Diferenca do maior pelo menor. \n");
    printf("3. Produto entre os numeros digitados. \n");
    printf("4. Divisao do primeiro pelo segundo. \n");
    scanf("%f", &operacao);

    if (operacao == 1)
    {
        operacao = (n1 + n2) / 2;
        printf("A media desses dois numeros e: %.2f.", operacao);
    }
    else if (operacao == 2)
    {
        if (n1 > n2)
        {
            operacao = n1 - n2;
            printf("A diferenca do maior pelo menor e: %.2f.", operacao);
        }
        else
        {
            operacao = n2 - n1;
            printf("A diferenca do maior pelo menor e: %.2f.", operacao);
        }
    }
    else if (operacao == 3)
    {
        operacao = n1 * n2;
        printf("O produto desses dois numeros e: %.2f.", operacao);
    }
    else if (operacao == 4)
    {
        operacao = n1 / n2;
        printf("A divisao do primeiro pelo segundo e: %.2f.", operacao);
    }
    else
    {
        printf("Escolha uma operacao valida. \n");
        return 1;
    }
    return 0;
    system("pause");
}