#include <stdio.h>

int main(void)
{
    float nota = 0, soma = 0, media = 0, alunosMaiorQue5 = 0, mediaTurma = 0, porcentMaiorQue5 = 0;

    for (int i = 1; i < 3; i++)
    {
        printf("\nSobre o aluno %d...\n", i);
        for (int z = 1; z < 6; z++)
        {
            printf("Digite a nota %i: ", z);
            scanf("%f", &nota);
            soma += nota;
        }
        media = soma / 5;
        mediaTurma += media;

        if (media >= 5)
        {
            alunosMaiorQue5++;
        }

        printf("\nA media do aluno %i e: %.2f.\n", i, media);
        soma = 0;
        media = 0;
        nota = 0;
    }
    mediaTurma = mediaTurma / 2;
    porcentMaiorQue5 = (alunosMaiorQue5 / 2) * 100;

    printf("\nA media da turma e: %.2f.", mediaTurma);
    printf("\nA porcentagem de alunos com media maior ou igual a 5 e: %.0f%%.\n", porcentMaiorQue5);
}