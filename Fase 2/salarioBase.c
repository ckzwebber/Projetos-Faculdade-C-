#include <stdio.h>

int main(void)
{
    float salarioBase, salarioAReceber = 0, gratificacao, imposto;

    printf("Digite o salario base de um funcionario: \n");
    scanf("%f", &salarioBase);

    imposto = salarioBase * 0.07;
    gratificacao = salarioBase * 0.05;

    salarioAReceber = (salarioBase - imposto) + gratificacao;

    printf("\nO salario a receber e: %.2f.\n", salarioAReceber);

    return 0;
}