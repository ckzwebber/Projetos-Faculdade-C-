#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, idade, pessoas18 = 0, pessoas28 = 0, pessoas29 = 0;
    float peso, media18 = 0, media28 = 0, media29 = 0;

    for (i = 1; i < 13; i++)
    {
        printf("Digite a idade da pessoa %d: ", i);
        scanf("%d", &idade);
        printf("Digite o peso da pessoa %d: ", i);
        scanf("%f", &peso);

        if (idade < 19)
        {
            media18 += peso;
            pessoas18++;
        }
        else if (idade < 29)
        {
            media28 += peso;
            pessoas28++;
        }
        else if (idade > 28)
        {
            media29 += peso;
            pessoas29++;
        }
    }
    if (pessoas18 != 0)
    {
        media18 /= pessoas18;
    }
    if (pessoas28 != 0)
    {
        media28 /= pessoas28;
    }
    if (pessoas29 != 0)
    {
        media29 /= pessoas29;
    }

    printf("A media do peso da faixa etaria 0 a 18 anos e: %.2f\n", media18);
    printf("A media do peso da faixa etaria 19 a 28 anos e: %.2f\n", media28);
    printf("A media do peso da faixa etaria 29 anos ou mais e: %.2f\n", media29);
    return 0;
}
