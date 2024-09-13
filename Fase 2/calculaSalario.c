#include <stdio.h>
#include <string.h>
#include "funcoesCalculaSalario.h"

int main(void)
{
    float salarioBase, horasTrabalhadas;

    printf("Digite o salario base da empresa: ");
    scanf("%f", &salarioBase);

    printf("\nDigite as horas trabalhadas: ");
    scanf("%f", &horasTrabalhadas);

    calculaValorDaHoraTrabalhada(salarioBase, horasTrabalhadas);
}