#include <stdio.h>

int main(void)
{

    char alunos[6][50];
    float notas[6][2], media = 0, mediaPorAluno[6] = {0};
    float percentualReprovados, percentualExame, percentualAprovados;
    int i, j, reprovados = 0, exames = 0, aprovados = 0;

    for (i = 0; i < 6; i++)
    {
        printf("Digite o nome do aluno %d: ", i + 1);
        fgets(alunos[i], 50, stdin);

        for (j = 0; j < 2; j++)
        {
            printf("Digite a nota %d do aluno: ", j + 1);
            scanf("%f", &notas[i][j]);
        }

        getchar();
    }

    for (i = 0; i < 6; i++)
    {
        printf("Aluno %d: %s", i + 1, alunos[i]);
        printf("Nota 1: %.2f --- Nota 2: %.2f\n", notas[i][0], notas[i][1]);

        for (j = 0; j < 2; j++)
        {
            mediaPorAluno[i] += notas[i][j];
        }

        mediaPorAluno[i] /= 2;

        if (mediaPorAluno[i] < 5)
        {
            reprovados++;
        }
        else if (mediaPorAluno[i] < 7)
        {
            exames++;
        }
        else
        {
            aprovados++;
        }

        media += mediaPorAluno[i];
    }

    media /= 6;

    percentualAprovados = (float)aprovados / 6 * 100;
    percentualExame = (float)exames / 6 * 100;
    percentualReprovados = (float)reprovados / 6 * 100;

    printf("A media geral e: %.2f \n", media);
    printf("O percentual de aprovados e: %.2f%% \n", percentualAprovados);
    printf("O percentual de exame e: %.2f%% \n", percentualExame);
    printf("O percentual de reprovados e: %.2f%% \n", percentualReprovados);

    return 0;
}
