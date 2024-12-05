#include <stdio.h>

typedef struct
{
    char nome[100], editora[100];
    int paginas;
} revista;

void lerRevistas(revista rev[3])
{
    int i;
    for (i = 0; i < 3; i++)
    {
        printf("\nDigite o nome da revista: ");
        fflush(stdin);
        gets(rev[i].nome);
        fflush(stdin);
        printf("\nDigite a editora da revista: ");
        gets(rev[i].editora);
        fflush(stdin);
        printf("\nDigite o numero de paginas da revista: ");
        scanf("%d", &rev[i].paginas);
    }
}

void mostrarRevistas(revista rev[3])
{
    int i, maior = -1, menor = 9999, revMaior, revMenor;
    for (i = 0; i < 3; i++)
    {
        printf("\n\nNome da revista: %s", rev[i].nome);

        printf("\nEditora da revista: %s", rev[i].editora);

        printf("\nNumero de paginas da revista: %d\n", rev[i].paginas);

        if (rev[i].paginas < menor)
        {
            menor = rev[i].paginas;
            revMenor = i;
        }
        if (rev[i].paginas > maior)
        {
            maior = rev[i].paginas;
            revMaior = i;
        }
    }

    printf("\nA revista com mais paginas e: %s. \n", rev[revMaior].nome);
    printf("A revista com menos paginas e: %s. \n", rev[revMenor].nome);
}

int main()
{
    revista rev[3];

    lerRevistas(rev);
    mostrarRevistas(rev);

    return 0;
}
