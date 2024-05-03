#include <stdio.h>
#include <math.h>

int main(void)
{

    int i, raiz;

    for (i = 0; i <= 4; i++)
    {
        printf("\n");

        printf("Digite um numero e eu te direi a raiz quadrada dele: ");
        scanf("%d", &raiz);

        printf("A raiz quadrada de %d e %.2f.\n", raiz, sqrt(raiz));
        printf("\n");
    }
}