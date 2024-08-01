#include <stdio.h>
#include <stdlib.h>

int main(void)
{

	// Carlos Miguel

	// Declarando todas as variaveis em char (as numericas nao envolvem contas)
	char nome[30], endereco[30], cidade[30], uf[10], cep[30], telefone[30],
		cpf[30], rg[30], datanasc[30], grauesc[30], curso[30];

	// Coletando os dados
	//***Utilizei FGETS para poder contemplar espacos e etc
	printf("Professor, digite seus dados: \n");

	printf("Nome: ");
	fgets(nome, sizeof(nome), stdin);

	printf("Endereco: ");
	fgets(endereco, sizeof(endereco), stdin);

	printf("Cidade: ");
	fgets(cidade, sizeof(cidade), stdin);

	printf("UF: ");
	fgets(uf, sizeof(uf), stdin);

	printf("CEP: ");
	fgets(cep, sizeof(cep), stdin);

	printf("Telefone: ");
	fgets(telefone, sizeof(telefone), stdin);

	printf("CPF: ");
	fgets(cpf, sizeof(cpf), stdin);

	printf("RG: ");
	fgets(rg, sizeof(rg), stdin);

	printf("Data de Nascimento: ");
	fgets(datanasc, sizeof(datanasc), stdin);

	printf("Grau de Escolaridade: ");
	fgets(grauesc, sizeof(grauesc), stdin);

	printf("Curso que Leciona: ");
	fgets(curso, sizeof(curso), stdin);

	// Imprimindo as informacoes na tela

	printf("\n");
	printf("Imprimindo as informacoes: \n\n");

	printf("Nome: %s", nome);
	printf("Endereco: %s", endereco);
	printf("Cidade: %s", cidade);
	printf("UF: %s", uf);
	printf("CEP: %s", cep);
	printf("Telefone: %s", telefone);
	printf("CPF: %s", cpf);
	printf("RG: %s", rg);
	printf("Data de Nascimento: %s", datanasc);
	printf("Grau de Escolaridade: %s", grauesc);
	printf("Curso: %s \n", curso);

	// Finalizando o programa
	system("pause");
	return 0;
}
