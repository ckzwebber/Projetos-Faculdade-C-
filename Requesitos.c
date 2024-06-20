#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char nome[50], sexo;
    int i, idade;

    for (i = 0; i < 20; i++)
    {
        printf("\n");
        printf("Digite o nome de uma pessoa: ");
        fgets(nome, sizeof(nome), stdin);
        printf("Digite o sexo dela: (M/F)");
        scanf(" %c", &sexo);
        printf("Por fim, digite a idade dela: ");
        scanf("%d", &idade);

        if (idade > 21 && (sexo == 'M' || sexo == 'm'))
        {
            printf("\n");
            printf("O nome dessa pessoa e: %s\n", nome);
        }
        else
        {
            printf("\n");
            printf("Essa pessoa e menor de 21 anos ou do sexo feminino.\n");
        }
        fflush(stdin);
    }
}