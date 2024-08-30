#include <stdio.h>

int calculaMediaPonderada(float notas[3], float pesos[3])
{
    int i;
    float somaPesos = 0, notasComPeso = 0, media = 0;

    for (i = 0; i < 3; i++)
    {
        notasComPeso += notas[i] * pesos[i];
        somaPesos += pesos[i];
    }

    media = notasComPeso / somaPesos;

    return printf("\nA media ponderada e: %.2f.", media);
}

int main(void)
{
    int i;
    float notas[3], pesos[3];
    printf("Digite 3 notas e seus pesos para calculo da media ponderada: \n");

    for (i = 0; i < 3; i++)
    {
        printf("Digite a nota %d: ", i + 1);
        scanf("%f", &notas[i]);
        printf("Digite o peso: ");
        scanf("%f", &pesos[i]);
    }

    calculaMediaPonderada(notas, pesos);
}