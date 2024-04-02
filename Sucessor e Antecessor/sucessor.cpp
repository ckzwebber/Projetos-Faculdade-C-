#include <stdio.h>
#include <stdlib.h>

int main(void)
{

	// Carlos Miguel

	// Declarando as variaveis em int como pedido
	int n1, ant, suc;

	// Pedindo e coletando o numero
	printf("Digite um numero inteiro: ");
	scanf("%d", &n1);
	printf("\n");

	// Calculando seu antecessor e sucessor
	ant = n1 - 1;
	suc = n1 + 1;

	// Imprimindo o resultado
	printf("O antecessor desse numero e: %d.\n", ant);
	printf("O sucessor desse numero e: %d.\n", suc);
	printf("\n");

	// Finalizando o programa
	system("pause");
	return 0;
}
