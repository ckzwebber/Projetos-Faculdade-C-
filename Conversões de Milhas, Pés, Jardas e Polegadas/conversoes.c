#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    float pes, pols, jardas, milhas;

    printf("Digite uma medida em pes: ");
    scanf("%f", &pes);

    pols = pes * 12;
    jardas = pes / 3;
    milhas = (pes / 3) / 1760;

    printf("Em polegadas: %.2f\n", pols);
    printf("Em jardas: %.2f\n", jardas);
    printf("Em milhas: %.2f\n", milhas);

    system("pause");
    return 0;
}