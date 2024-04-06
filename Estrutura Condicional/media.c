#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float nota1, nota2, media;

    printf("Digite as duas notas de um aluno: \n");
    scanf("%f", &nota1);
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2;

    if (media < 3)
    {
        printf("Esse aluno foi reprovado, pois ficou com media %2.f (menor que 3).", media);
    }
    else if (media >= 3 && media < 7)
    {
        printf("Esse aluno ira fazer um exame, pois ficou com media %2.f (entre 3 e 7.", media);
    }
    else
    {
        printf("Esse aluno foi aprovado, pois ficou com media %2.f (maior que 7).", media);
    }
    return 0;
    system("pause");
}