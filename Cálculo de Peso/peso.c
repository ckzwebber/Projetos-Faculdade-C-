#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    float pesoracao, consumoracao, restoracao;

    printf("Digite o peso de um saco de racao em kg: ");
    scanf("%f", &pesoracao);

    printf("Digite quantas gramas cada gato vai comer por dia (em um total de 2 gatos): ");
    scanf("%f", &consumoracao);

    pesoracao = pesoracao * 1000;
    consumoracao = (consumoracao * 2) * 5;

    restoracao = pesoracao - consumoracao;

    printf("Apos 5 dias, sobrara %.1f gramas de racao!\n", restoracao);

    system("pause");
    return 0;
}