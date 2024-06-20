#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    float salario, aumento;

    printf("Digite o salario de um funcionario: \n");
    scanf("%f", &salario);

    if (salario <= 1500)
    {
        aumento = salario * 0.35;
        salario = salario + aumento;
        printf("Parabens, voce ira receber um aumento de %2.f reais, totalizando um salario de %2.f reais!", aumento, salario);
    }
    else
    {
        aumento = salario * 0.15;
        salario = salario + aumento;
        printf("Parabens, voce ira receber um aumento de %2.f reais, totalizando um salario de %2.f reais!", aumento, salario);
    }

    return 0;
    system("pause");
}