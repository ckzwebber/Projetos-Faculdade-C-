#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float nota1, nota2, media, mediaClasse = 0;
    int i, alunos = 6, aprovados = 0, exame = 0, reprovados = 0;

    for (i = 1; i <= alunos; i++)
    {
        printf("Digite a primeira nota do aluno %d: ", i);
        scanf("%f", &nota1);
        printf("Digite a segunda nota do aluno %d: ", i);
        scanf("%f", &nota2);

        media = (nota1 + nota2) / 2;
        mediaClasse += media;

        printf("Media do aluno %d: %.2f\n", i, media);

        if (media <= 3.0)
        {
            printf("Situacao: Reprovado\n");
            reprovados++;
        }
        else if (media <= 7.0)
        {
            printf("Situacao: Exame\n");
            exame++;
        }
        else
        {
            printf("Situacao: Aprovado\n");
            aprovados++;
        }

        printf("\n");
    }

    printf("Total de alunos aprovados: %d\n", aprovados);
    printf("Total de alunos de exame: %d\n", exame);
    printf("Total de alunos reprovados: %d\n", reprovados);
    printf("Média da classe: %.2f\n", mediaClasse / alunos);

    return 0;
}