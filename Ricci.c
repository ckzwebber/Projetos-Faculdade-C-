#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, n1, n2, proximo, soma = 0;

    printf("Digite o primeiro termo: ");
    scanf("%d", &n1);
    printf("Digite o segundo termo: ");
    scanf("%d", &n2);

    for (i = 1; i <= 10; i++)
    {
        printf("%d ", n1);
        soma += n1;
        proximo = n1 + n2;
        n1 = n2;
        n2 = proximo;
    }
    printf("\nSoma dos termos: %d", soma);
    return 0;
}