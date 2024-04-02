#include <stdio.h>
#include <stdlib.h>

int main(void)
{

	// Carlos Miguel

	// Declarando as variaveis em float pois podem existir numeros com casas decimais
	float m1, m2, area, pot;

	// Pedindo e coletando as dimensoes do comodo
	printf("Digite as duas dimensoes de um comodo, em metros: \n");

	printf("Primeira: ");
	scanf("%f", &m1);

	printf("Segunda: ");
	scanf("%f", &m2);

	// Calculando a area do comodo
	area = m1 * m2;

	// Calculando a potencia luminosa necessaria para o comodo
	pot = 18 * area;

	// Imprimindo as informacoes na tela
	printf("\n");
	printf("A area do comodo e de %.2f metros quadrados. \n", area);
	printf("Portanto, sao necessarios %.2f W de potencia de iluminacao. \n", pot);
	printf("\n");

	// Finalizando o programa
	system("pause");
	return 0;
}
