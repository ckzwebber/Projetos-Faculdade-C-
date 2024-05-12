#include <stdio.h>

int main(void)
{
    int quantidade, i, numero, soma = 0, contagem = 0, maior = -9999999, menor = 99999999, impares = 0;
    float media, percentual;

    printf("Digite a quantidade de numeros a serem lidos: ");
    scanf("%d", &quantidade);

    for (i = 0; i < quantidade; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &numero);

        soma += numero;
        contagem++;

        if (numero > maior)
        {
            maior = numero;
        }
        if (numero < menor)
        {
            menor = numero;
        }
        if (numero % 2 != 0)
        {
            impares++;
        }
    }

    media = (float)soma / contagem;
    percentual = (float)impares / contagem * 100;

    printf("Soma: %d\n", soma);
    printf("Quantidade: %d\n", contagem);
    printf("Media: %.2f\n", media);
    printf("Maior: %d\n", maior);
    printf("Menor: %d\n", menor);
    printf("Percentual de numeros impares: %.2f%%\n", percentual);

    return 0;
}