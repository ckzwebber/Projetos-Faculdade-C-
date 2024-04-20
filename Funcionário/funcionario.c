#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char nome[50];
    float salario_base, tempo_trabalho, imposto, gratificacao, salario_final;

    printf("Digite o nome do funcionario: ");
    gets(nome);

    printf("Digite o salario base do funcionario: ");
    scanf("%f", &salario_base);

    printf("Digite o tempo de trabalho do funcionario, em anos: ");
    scanf("%f", &tempo_trabalho);

    if (salario_base < 200)
    {
        imposto = 0;
    }
    else if (salario_base <= 450)
    {
        imposto = salario_base * 0.03;
    }
    else if (salario_base < 700)
    {
        imposto = salario_base * 0.08;
    }
    else
    {
        imposto = salario_base * 0.12;
    }

    if (salario_base > 500 && tempo_trabalho <= 3)
    {
        gratificacao = 0.20;
    }
    else if (salario_base > 500 && tempo_trabalho > 3)
    {
        gratificacao = 0.30;
    }
    else if (salario_base <= 500 && tempo_trabalho <= 3)
    {
        gratificacao = 0.23;
    }
    else if (salario_base <= 500 && tempo_trabalho > 3 && tempo_trabalho < 6)
    {
        gratificacao = 0.35;
    }
    else
    {
        gratificacao = 0.33;
    }

    salario_final = salario_base + (salario_base * gratificacao) - imposto;
    printf("O funcionario %s tem um salario final de R$ %.2f\n", nome, salario_final);

    system("pause");
    return 0;
}