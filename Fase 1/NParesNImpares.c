#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i;
    int somaPares = 0;
    int somaImpares = 0;
    float contagemPares = 0;
    float contagemImpares = 0;
    float porcentagemPares = 0;
    float porcentagemImpares = 0;

    for (i = 85; i <= 906; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d e par\n", i);
            somaPares += i;
            contagemPares++;
        }
        else
        {
            printf("%d e impar\n", i);
            somaImpares += i;
            contagemImpares++;
        }
    }

    porcentagemPares = contagemPares / (906 - 85 + 1) * 100;
    porcentagemImpares = contagemImpares / (906 - 85 + 1) * 100;

    printf("Soma dos numeros pares: %d\n", somaPares);
    printf("Soma dos numeros impares: %d\n", somaImpares);
    printf("Porcentagem de numeros pares: %.2f%%\n", porcentagemPares);
    printf("Porcentagem de numeros impares: %.2f%%\n", porcentagemImpares);

    return 0;
}