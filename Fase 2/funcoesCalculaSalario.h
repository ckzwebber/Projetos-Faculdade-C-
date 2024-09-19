#include <stdio.h>

void calculaValorDaHoraTrabalhada(float salarioBase, float horaTrabalhada);
void calculaSalarioBruto(float valorDaHoraTrabalhada, float horaTrabalhada);
void calculaSalarioLiquido(float salarioBruto);

void calculaValorDaHoraTrabalhada(float salarioBase, float horaTrabalhada)
{
    float valorDaHoraTrabalhada = 0;

    valorDaHoraTrabalhada = salarioBase * 0.13;

    calculaSalarioBruto(valorDaHoraTrabalhada, horaTrabalhada);
}

void calculaSalarioBruto(float valorDaHoraTrabalhada, float horaTrabalhada)
{
    float salarioBruto = 0;

    salarioBruto = valorDaHoraTrabalhada * horaTrabalhada;

    calculaSalarioLiquido(salarioBruto);
}

void calculaSalarioLiquido(float salarioBruto)
{
    float salarioLiquido, imposto;

    imposto = salarioBruto * 0.0755;

    salarioLiquido = salarioBruto - imposto;

    printf("O salario calculado e: %.2f", salarioLiquido);
}