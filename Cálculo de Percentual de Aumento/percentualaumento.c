#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{

    float salario, percentual, aumento, novo;

    printf("Insira o seu salario: \n");
    scanf("%f", &salario);

    printf("Insira o percentual de aumento: \n");
    scanf("%f", &percentual);

    novo = salario * ((percentual / 100) + 1);

    aumento = salario * (percentual / 100);

    printf("Seu novo salario e: %.2f \n", novo);

    printf("O aumento foi de: %.2f \n", aumento);
}