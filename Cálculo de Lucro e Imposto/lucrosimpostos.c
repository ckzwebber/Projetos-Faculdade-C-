#include <stdio.h>
#include <stdlib.h>

int main (void) {

    float fabrica, lucro, impostos, rlucro, rimpostos, precofinal;

    printf("Digite o preco de fabrica de um veiculo: ");
    scanf("%f", &fabrica);

    printf("Digite o percentual de lucro: ");
    scanf("%f", &lucro);

    printf("Digite o percentual de impostos: ");
    scanf("%f", &impostos);

    lucro = lucro / 100;
    rlucro = fabrica * lucro,

    impostos = impostos / 100;
    rimpostos = fabrica * impostos;

    precofinal = fabrica + rlucro + rimpostos;

    printf("\n");
    printf("O valor correspondente ao lucro e: %.2f\n", rlucro);
    printf("\n");
    printf("O valor correspondente aos impostos e: %.2f\n", rimpostos);
    printf("\n");
    printf("O valor final e: %.2f\n", precofinal);
    printf("\n");


    system("pause");
    return 0;
}