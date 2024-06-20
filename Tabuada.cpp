#include <stdio.h>
#include <stdlib.h>

int main(void)
{

	// Carlos Miguel

	// Declarando as variaveis em int (considerando as tabuadas de 1 a 10)
	int num, tabuada, i;

	// Perguntando e coletando qual tabuada o usuario quer ver
	printf("Voce quer ver a tabuada de qual numero? ");
	scanf("%d", &num);

	printf("\n");
	// Imprimindo a tabuada escolhida com um laco de reticao for (evitando ctrl c + ctrl v)
	for (i = 1; i <= 10; i++)
	{
		tabuada = num * i;
		printf("%d x %d: %d \n", num, i, tabuada);
	}

	printf("\n");

	// Finalizando o programa
	system("pause");
	return 0;
}
