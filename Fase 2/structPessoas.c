#include <stdio.h>

typedef struct
{
    char nome[50];
    int idade;
} pessoa;

int main()
{
    pessoa pessoas[3];
    int i;

    for (i = 0; i < 3; i++)
    {
        printf("\nDigite o nome da pessoa: ");
        fflush(stdin);
        gets(pessoas[i].nome);
        fflush(stdin);

        do
        {
            printf("Digite a idade da pessoa (idade deve ser menor que 45): ");
            scanf("%d", &pessoas[i].idade);
            if (pessoas[i].idade > 45)
            {
                printf("Idade invalida. Tente novamente.\n");
            }
        } while (pessoas[i].idade > 45);
    }

    printf("\nPessoas:\n");
    for (i = 0; i < 3; i++)
    {
        printf("\nNome: %s\n", pessoas[i].nome);
        printf("Idade: %d\n", pessoas[i].idade);
    }

    return 0;
}
