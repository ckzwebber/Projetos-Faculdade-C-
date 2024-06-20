#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float salario, desconto_inss;

    printf("Digite um salario: ");
    scanf("%f", &salario);

    if (salario <= 600)
    {
        desconto_inss = 0;
    }
    else if (salario <= 1200)
    {
        desconto_inss = salario * 0.2;
    }
    else if (salario <= 2000)
    {
        desconto_inss = salario * 0.25;
    }
    else
    {
        desconto_inss = salario * 0.3;
    }

    printf("O desconto do INSS e de R$ %.2f\n", desconto_inss);
    printf("Seu novo salario e de R$ %.2f\n", salario - desconto_inss);

    system("pause");
    return 0;
}