#include <stdio.h>
#include <stdlib.h>

int main(void)
{

	// Carlos Miguel

	// Declarando as variaveis em float pois podem existir numeros com casas decimais
	float cel, fah;

	// Pedindo e coletando a temperatura em celsius
	printf("Digite uma temperatura em Celsius: ");
	scanf("%f", &cel);

	// Realizando a conta de conversao
	fah = 180 * (cel + 32) / 100;

	// Imprimindo o resultado na tela
	printf("\n");
	printf("O valor em Fahrenheit e: %.2f \n", fah);
	printf("\n");

	// Finalizando o programa
	system("pause");
	return 0;
}
