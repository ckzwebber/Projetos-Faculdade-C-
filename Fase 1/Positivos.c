#include <stdio.h>

int main(void)
{
    int numero = 0, soma = 0;

    while (numero >= 0)
    {
        printf("Digite um numero: ");
        scanf("%d", &numero);
        soma++;
        fflush(stdin);
    }
    printf("Numeros positivos digitados: %d", soma - 1);
}