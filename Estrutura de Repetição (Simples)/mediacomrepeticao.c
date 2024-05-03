#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float numero, soma = 0, media;
    int i;

    printf("Digite quatro numeros: \n");

    for (i = 1; i <= 4; i++)
    {
        printf("Digite o numero: ", i);
        scanf("%f", &numero);
        soma = numero + soma;
    }
    media = soma / 4;

    printf("A media desses 4 numeros e: %.2f\n", media);
}