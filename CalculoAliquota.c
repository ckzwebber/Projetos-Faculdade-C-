#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i;
    float salario, aliquota;
    char nome[50];

    for (i = 1; i < 11; i++)
    {
        fflush(stdin);
        printf("Digite um nome: ");
        gets(nome);
        printf("Digite o salario de %s: ", nome);
        scanf("%f", &salario);

        if (salario < 990)
        {
            aliquota = 0;
        }
        else if (salario < 2500)
        {
            aliquota = salario * 0.10;
        }
        else
        {
            aliquota = salario * 0.15;
        }

        printf("A aliquota de %s e %.2fR$.\n", nome, aliquota);
    }
    return 0;
}