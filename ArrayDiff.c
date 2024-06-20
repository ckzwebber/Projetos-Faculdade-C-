#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int vetor[10], i, maior, menor, posicao_maior, posicao_menor, diferenca;

    printf("Digite os 10 numeros do vetor:\n");
    for (i = 0; i < 10; i++)
    {
        printf("Numero %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    maior = vetor[0];
    menor = vetor[0];
    posicao_maior = 0;
    posicao_menor = 0;

    for (i = 1; i < 10; i++)
    {
        if (vetor[i] > maior)
        {
            maior = vetor[i];
            posicao_maior = i + 1;
        }
        if (vetor[i] < menor)
        {
            menor = vetor[i];
            posicao_menor = i + 1;
        }
    }

    diferenca = maior - menor;
    printf("Diferenca entre o maior e o menor elemento: %d\n", diferenca);

    printf("Posicao do maior elemento: %d\n", posicao_maior);
    printf("Posicao do menor elemento: %d\n", posicao_menor);

    return 0;
}