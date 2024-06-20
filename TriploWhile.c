#include <stdio.h>

int main(void)
{
    int numero = 0;

    while (numero != -999)
    {
        printf("Digite um numero: ");
        scanf("%d", &numero);
        printf("%d\n", numero * 3);
        fflush(stdin);
    }
}