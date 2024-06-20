#include <stdio.h>

int main(void)
{
    int i, idade, opiniao, totalExcelente = 0, totalRegular = 0, totalBom = 0, totalExpectadores = 0;
    float mediaIdadeExcelente = 0.0, percentualBom = 0.0;

    for (i = 1; i <= 10; i++)
    {
        printf("Informe a idade do expectador %d: ", i);
        scanf("%d", &idade);

        printf("Informe a opiniao (1-regular, 2-bom, 3-excelente) do expectador %d: ", i);
        scanf("%d", &opiniao);

        if (opiniao == 3)
        {
            totalExcelente++;
            mediaIdadeExcelente += idade;
        }
        else if (opiniao == 2)
        {
            totalBom++;
        }
        else if (opiniao == 1)
        {
            totalRegular++;
        }
    }

    if (totalExcelente > 0)
    {
        mediaIdadeExcelente /= totalExcelente;
        printf("A media das idades das pessoas que responderam excelente: %.2f\n", mediaIdadeExcelente);
    }
    else
    {
        printf("Nenhum expectador respondeu excelente.\n");
    }

    printf("A quantidade de pessoas que responderam regular: %d\n", totalRegular);

    totalExpectadores = totalExcelente + totalRegular + totalBom;
    if (totalExpectadores > 0)
    {
        percentualBom = (float)totalBom / totalExpectadores * 100;
        printf("O percentual de pessoas que responderam bom entre todos os expectadores analisados: %.2f%%\n", percentualBom);
    }
    else
    {
        printf("Nenhum expectador respondeu.\n");
    }

    return 0;
}