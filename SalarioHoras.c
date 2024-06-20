#include <stdlib.h>
#include <stdlib.h>

int main(void)
{

    float horas, salario_min, valorhoras, salariobruto, imposto, salarioreal;

    printf("Digite o numero de horas trabalhadas por um funcionario: ");
    scanf("%f", &horas);

    printf("Digite o valor do salario minimo: ");
    scanf("%f", &salario_min);

    imposto = 0.97;
    valorhoras = salario_min / 8;
    salariobruto = horas * valorhoras;
    salarioreal = salariobruto * imposto;

    printf("Esse funcionario deve receber %2.f reais.\n", salarioreal);

    system("pause");
    return 0;
}