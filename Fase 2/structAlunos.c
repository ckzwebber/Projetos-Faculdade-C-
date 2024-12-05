#include <stdio.h>

typedef struct
{
    char nome[50], email[100], dataNascimento[50];
    float notas[3], media;
} aluno;

int main()
{
    aluno alunos[5];
    int i, j, soma = 0;

    for (i = 0; i < 5; i++)
    {
        soma = 0;
        printf("\nDigite o nome do aluno: ");
        fflush(stdin);
        gets(alunos[i].nome);
        fflush(stdin);
        printf("Digite o email do aluno: ");
        fflush(stdin);
        gets(alunos[i].email);
        fflush(stdin);
        printf("Digite a data de nascimento do aluno: ");
        fflush(stdin);
        gets(alunos[i].dataNascimento);
        fflush(stdin);
        for (j = 0; j < 3; j++)
        {
            printf("Digite a nota %d do aluno: ", j + 1);
            scanf("%f", &alunos[i].notas[j]);
            soma += alunos[i].notas[j];
        }
        alunos[i].media = soma / 3;
    }

    for (i = 0; i < 5; i++)
    {
        printf("\nNome do Aluno: %s.\n", alunos[i].nome);
        printf("Email do Aluno: %s.\n", alunos[i].email);
        printf("Data de nascimento do Aluno: %s.\n", alunos[i].dataNascimento);
        printf("Media das notas do Aluno: %.2f.\n", alunos[i].media);
    }

    return 0;
}