#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i;
    float notas[3], pesos[3], media = 0, somaPesos = 0, notasComPesos[3];

    printf("\nDigite 3 notas e seus 3 respectivos pesos: \n");

    for (i = 0; i < 3; i++)
    {
        printf("Nota %d: ", i + 1);
        scanf("%f", &notas[i]);
        fflush(stdin);
        printf("Peso %d: ", i + 1);
        scanf("%f", &pesos[i]);
        fflush(stdin);

        somaPesos += pesos[i];
        notasComPesos[i] = notas[i] * pesos[i];
    }

    media = (notasComPesos[0] + notasComPesos[1] + notasComPesos[2]) / somaPesos;

    printf("\nA media ponderada e: %.2f.\n", media);
    return 0;
}