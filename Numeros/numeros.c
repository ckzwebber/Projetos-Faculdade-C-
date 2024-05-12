#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, negativos;
    float numero, soma;

    for (i = 0; i < 20; i++)
    {
        printf("Digite um numero: ");
        scanf("%f", &numero);

        if (numero > 0)
        {
            soma += numero;
        }
        else
        {
            negativos++;
        }
    }
    printf("A soma dos numeros positivos e: %.2f.\n", soma);
    printf("A quantidade de numeros negativos e: %d.\n", negativos);

    return 0;
}