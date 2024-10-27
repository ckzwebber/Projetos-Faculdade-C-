#include <stdio.h>

void calculaPresoCombustivel(float aumentoAlcool, float aumentoGasolina, float aumentoDiesel, float *valorAlcool, float *valorGasolina, float *valorDiesel)
{
    *valorAlcool *= (1 + (aumentoAlcool / 100));
    *valorGasolina *= (1 + (aumentoGasolina / 100));
    *valorDiesel *= (1 + (aumentoDiesel / 100));
}

int main(void)
{

    float aumentoAlcool, aumentoGasolina, aumentoDiesel, alcool, gasolina, diesel;

    printf("Preco alcool: ");
    scanf("%f", &alcool);

    printf("Preco gasolina: ");
    scanf("%f", &gasolina);

    printf("Preco diesel: ");
    scanf("%f", &diesel);

    printf("Aumento alcool: ");
    scanf("%f", &aumentoAlcool);

    printf("Aumento gasolina: ");
    scanf("%f", &aumentoGasolina);

    printf("Aumento diesel: ");
    scanf("%f", &aumentoDiesel);

    calculaPresoCombustivel(aumentoAlcool, aumentoGasolina, aumentoDiesel, &alcool, &gasolina, &diesel);

    printf("Precos atualizados: \n");
    printf("Alcool: %.2f\n", alcool);
    printf("Gasolina: %.2f\n", gasolina);
    printf("Diesel: %.2f\n", diesel);

    return 0;
}