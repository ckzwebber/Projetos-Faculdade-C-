#include <stdio.h>

int main(void)
{
    int numero = 0, soma = 0, quantidade = 0;

    while (numero >= 0)
    {
        printf("Digite um numero: ");
        scanf("%d", &numero);
        if (numero > 0)
        {
            soma += numero;
            quantidade++;
        }
        fflush(stdin);
    }
    printf("Media dos numeros digitados: %d", soma / (quantidade));
}