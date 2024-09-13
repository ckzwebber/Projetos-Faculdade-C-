#include <stdio.h>
void recebeSalarioEMostraImposto(float salario);
void recebeSalarioEMostraNovoSalario(float salario);
void recebeSalarioEMostraSuaClassificacao(float salario);

int main(void)
{
    int opcao;
    float salario;

    printf("Menu de opcoes: \n");

    printf("1. Imposto. \n");
    printf("2. Novo Salario. \n");
    printf("3. Classificacao. \n");

    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    if (opcao != 1 && opcao != 2 && opcao != 3)
    {
        printf("Opcao invalida! \n");
        return 1;
    }

    printf("\nDigite o salario do funcionario: ");
    scanf("%f", &salario);

    switch (opcao)
    {
    case 1:
        recebeSalarioEMostraImposto(salario);
        break;

    case 2:
        recebeSalarioEMostraNovoSalario(salario);
        break;

    case 3:
        recebeSalarioEMostraSuaClassificacao(salario);
        break;
    }
}

void recebeSalarioEMostraImposto(float salario)
{
    float imposto;

    if (salario < 500)
    {
        imposto = salario * 0.05;
    }
    else if (salario < 850)
    {
        imposto = salario * 0.10;
    }
    else
    {
        imposto = salario * 0.15;
    }
    printf("O imposto em cima desse salario e: %.2f \n", imposto);
}

void recebeSalarioEMostraNovoSalario(float salario)
{
    if (salario < 450)
    {
        salario += 100;
    }
    else if (salario < 745)
    {
        salario += 75;
    }
    else if (salario < 1500)
    {
        salario += 50;
    }
    else
    {
        salario += 25;
    }

    printf("O novo salario e: %.2f \n", salario);
}

void recebeSalarioEMostraSuaClassificacao(float salario)
{
    if (salario <= 700)
    {
        printf("Voce e mal remunerado! \n");
    }
    else
    {
        printf("Voce e bem remunerado! \n");
    }
}