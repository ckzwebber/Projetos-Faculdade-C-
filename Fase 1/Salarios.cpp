#include <stdio.h>
#include <stdlib.h>

int main(void)
{

	// Carlos Miguel

	// Declarando variaveis em float, pois podem existir valores com casas decimais
	float salario_min, salario_fun, qnt_salarios;

	// Pedindo e coletando os valores necessarios
	printf("Digite o valor do salario minimo: ");
	scanf("%f", &salario_min);

	printf("Digite o salario de um funcionario: ");
	scanf("%f", &salario_fun);

	// Fazendo a conta da quantidade de salarios minimos
	qnt_salarios = salario_fun / salario_min;

	// Imprimindo o resultado na tela
	printf("\n");
	printf("Esse funcionario recebe %.2f salarios minimos! \n", qnt_salarios);
	printf("\n");

	// Finalizando o programa
	system("pause");
	return 0;
}
