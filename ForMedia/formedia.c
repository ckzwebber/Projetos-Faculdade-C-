#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i;
    float n1, n2, media;
    char nome[50];

    for (i = 0; i < 15; i++)
    {
        fflush(stdin);
        printf("Digite o nome do aluno: ");
        gets(nome);
        printf("Digite a nota 1: ");
        scanf("%f", &n1);
        printf("Digite a nota 2: ");
        scanf("%f", &n2);
        media = (n1 + n2) / 2;
        printf("As notas do aluno %s sao %.2f e %.2f, e sua media e: %.2f.\n", nome, n1, n2, media);
    }
    return 0;
}