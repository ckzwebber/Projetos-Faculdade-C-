#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char nome[100];
    float salario;
    int numFilhos;
    float salarioMedio2Filhos = 0;
    float salarioMedio1Filho = 0;
    int count2Filhos = 0;
    int count1Filho = 0;

    for (int i = 0; i < 100; i++)
    {
        fflush(stdin);
        printf("Digite o nome da pessoa %d: ", i + 1);
        gets(nome);
        fflush(stdin);
        printf("Digite o salário da pessoa %d: ", i + 1);
        scanf("%f", &salario);
        printf("Digite o número de filhos da pessoa %d: ", i + 1);
        scanf("%d", &numFilhos);

        if (numFilhos == 2)
        {
            salarioMedio2Filhos += salario;
            count2Filhos++;
        }
        else if (numFilhos == 1)
        {
            salarioMedio1Filho += salario;
            count1Filho++;
        }
    }

    if (count2Filhos > 0)
    {
        salarioMedio2Filhos /= count2Filhos;
        printf("Salário médio das pessoas com 2 filhos: %.2f\n", salarioMedio2Filhos);
    }
    else
    {
        printf("Não há pessoas com 2 filhos.\n");
    }

    if (count1Filho > 0)
    {
        salarioMedio1Filho /= count1Filho;
        printf("Salário médio das pessoas com 1 filho: %.2f\n", salarioMedio1Filho);
    }
    else
    {
        printf("Não há pessoas com 1 filho.\n");
    }

    if (salarioMedio2Filhos > salarioMedio1Filho)
    {
        printf("A média salarial maior é dos que têm 2 filhos.\n");
    }
    else if (salarioMedio1Filho > salarioMedio2Filhos)
    {
        printf("A média salarial maior é dos que têm 1 filho.\n");
    }
    else
    {
        printf("As médias salariais são iguais.\n");
    }

    return 0;
}