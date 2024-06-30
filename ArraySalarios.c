#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i;
    float salarios[3];
    char nome[20][20];

    for (i = 0; i < 20; i++)
    {
        fflush(stdin);
        printf("Digite o nome: ");
        scanf("%s", &nome[i]);
        fflush(stdin);
        salarios[i] *= 1.08;
        printf("Digite o salario %d: ", i + 1);
        scanf("%f", &salarios[i]);
    }

    for (i = 0; i < 20; i++)
    {
        salarios[i] *= 1.08;
        printf("O novo salario de %s e: %.2f. \n", nome[i], salarios[i]);
    }
}