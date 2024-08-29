#include <stdio.h>
int somandoEntreOsValores(int numero1, int numero2);

int main(void)
{
    int numero1, numero2;

    do
    {
        printf("Digite o primeiro numero positivo: ");
        scanf("%d", &numero1);
        printf("Digite o segundo numero positivo: ");
        scanf("%d", &numero2);
    } while (numero1 < 0 || numero2 < 0);

    somandoEntreOsValores(numero1, numero2);

    return 0;
}

int somandoEntreOsValores(int numero1, int numero2)
{
    int i, soma = 0;

    for (i = numero1 + 1; i < numero2; i++)
    {
        soma += i;
    }

    return printf("%d", soma);
}