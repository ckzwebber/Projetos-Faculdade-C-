#include <stdio.h>
#include <stdlib.h>

int main(void)
{

	// Carlos Miguel

	// Declarando as variaveis em float pois podem existir numeros com casas decimais
	float salario, conta1, conta2, multa, rest_salario;

	// Pedindo e coletando os dados do usuario
	printf("Digite o salario de Joao: ");
	scanf("%f", &salario);

	printf("Digite o valor da primeira conta de Joao: ");
	scanf("%f", &conta1);

	printf("Digite o valor da segunda conta de Joao: ");
	scanf("%f", &conta2);

	// Calculando a multa
	multa = (conta1 * 1.02) + (conta2 * 1.02);

	// Imprimindo o valor total
	printf("\n");
	printf("O total de contas + multa a ser pago e: %.2f\n", multa);

	// Calculando o restante do salario
	rest_salario = salario - multa;

	// Verificando SE o salario e maior ou menor que zero (sobra ou falta dinheiro)
	if (rest_salario > 0)
	{
		printf("Sobrou %.2f reais do salario de Joao! \n", rest_salario);
	}
	else if (rest_salario == 0)
	{
		printf("O salario de Joao foi exatamente o valor de suas contas! Portanto, Joao ficou com %.2f reais! \n", rest_salario);
	}
	else
	{
		printf("Faltou dinheiro, Joao ficou devendo %.2f reais! \n", rest_salario);
	}

	printf("\n");

	// Finalizando o programa
	system("pause");
	return 0;
}
