#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    float salario, aumento, novo_salario;

    printf("Digite o salario do funcionario: \n");
    scanf("%f", &salario);

    if (salario < 3000)
    {
        aumento = salario * 0.15;
    }
    else if (salario < 6000)
    {
        aumento = salario * 0.10;
    }
    else if (salario <= 9000)
    {
        aumento = salario * 0.05;
    }
    else
    {
        aumento = 0;
    }
    novo_salario = salario + aumento;
    printf("O novo salario do funcionario e: %.2f\n", novo_salario);

    system("pause");
    return 0;
}