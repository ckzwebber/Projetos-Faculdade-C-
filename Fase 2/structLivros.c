#include <stdio.h>

typedef struct
{
    char nome[100], editora[100];
    int ano, paginas;
    float preco;
} livro;

int main()
{
    livro livros[5];
    int i, somaPaginas = 0;
    float mediaPaginas;

    for (i = 0; i < 5; i++)
    {
        printf("\nDigite o nome do livro: ");
        fflush(stdin);
        gets(livros[i].nome);
        fflush(stdin);

        printf("Digite a editora do livro: ");
        fflush(stdin);
        gets(livros[i].editora);
        fflush(stdin);

        printf("Digite o ano de edicao do livro: ");
        scanf("%d", &livros[i].ano);

        printf("Digite o numero de paginas do livro: ");
        scanf("%d", &livros[i].paginas);
        somaPaginas += livros[i].paginas;

        printf("Digite o preco do livro: ");
        scanf("%f", &livros[i].preco);
    }

    mediaPaginas = somaPaginas / 5;

    printf("\nMedia de paginas dos livros: %.2f\n", mediaPaginas);

    return 0;
}
