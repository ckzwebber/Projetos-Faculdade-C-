#include <stdio.h>

int main(void)
{
    float precoFabrica, lucroDistribuidor, impostosAplicados;

    printf("Digite o preco de fabrica do veiculo: \n");
    scanf("%f", &precoFabrica);

    printf("Digite o percentual de lucro do distribuidor: \n");
    scanf("%f", &lucroDistribuidor);

    printf("Digite o percentual de impostos aplicados: \n");
    scanf("%f", &impostosAplicados);

    lucroDistribuidor /= 100;
    impostosAplicados /= 100;

    lucroDistribuidor *= precoFabrica;
    impostosAplicados *= precoFabrica;
    precoFabrica = (precoFabrica + lucroDistribuidor) + impostosAplicados;

    printf("\nOs precos correspondentes: \n\n");
    printf("Lucro do distribuidor: R$%.2f.\n", lucroDistribuidor);
    printf("Impostos aplicados: R$%.2f. \n", impostosAplicados);
    printf("Preco final do veiculo: R$%.2f. \n\n", precoFabrica);

    return 0;
}