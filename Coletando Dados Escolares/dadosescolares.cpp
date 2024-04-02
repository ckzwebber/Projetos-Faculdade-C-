#include <stdio.h>
#include <stdlib.h>

int main(void)
{

	// Carlos Miguel

	// Declarando as variaveis em char (descricao tem mais caracteres)
	// Presumi que a media nao seria usada para contas, portanto usei char
	char nome[50], descricao[80], frequencia[30], media_min[30];

	// Pedindo e coletando os dados
	//***Utilizei FGETS para contemplar espacos e etc

	printf("Digite os dados de uma disciplina escolar: \n");

	printf("Nome: ");
	fgets(nome, sizeof(nome), stdin);

	printf("Descricao: ");
	fgets(descricao, sizeof(descricao), stdin);

	printf("Frequencia: ");
	fgets(frequencia, sizeof(frequencia), stdin);

	printf("Media Minima: ");
	fgets(media_min, sizeof(media_min), stdin);

	// Imprimindo as informacoes na tela

	printf("\n");
	printf("Imprimindo as informacoes: \n\n");

	printf("Nome: %s", nome);
	printf("Descricao: %s", descricao);
	printf("Frequencia: %s", frequencia);
	printf("Media Minima: %s \n", media_min);

	// Finalizando o programa

	system("pause");
	return 0;
}
