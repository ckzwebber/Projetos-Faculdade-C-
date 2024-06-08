#include <stdio.h>

int main(void)
{
    float numerosDigitados = 0, soma = 0, media = 0, maior = -9999, menor = 9999, somaPares = 0, pares = 0, mediaPares = 0, impares = 0, porcentagemImpares = 0;
    int num = 0;

    do
    {

        printf("Digite numeros (30000 para parar): ");
        scanf("%d", &num);

        if (num == 30000)
        {
            break;
        }

        printf("%d\n", num);

        soma += num;
        numerosDigitados++;

        if (num > maior)
        {
            maior = num;
        }

        if (num < menor)
        {
            menor = num;
        }

        if (num % 2 == 0)
        {
            somaPares += num;
            pares++;
        }

        else
        {
            impares++;
        }
    } while (num != 30000);

    media = num / numerosDigitados;
    mediaPares = somaPares / pares;
    porcentagemImpares = (impares / numerosDigitados) * 100;

    printf("\nA soma: %.2f.\n", soma);
    printf("A quantidade: %.2f.\n", numerosDigitados);
    printf("A media: %.2f.\n", media);
    printf("O maior: %.2f.\n", maior);
    printf("O menor: %.2f.\n", menor);
    printf("A media dos pares: %.2f.\n", mediaPares);
    printf("A porcentagem dos impares (entre todos): %.2f%%.\n", porcentagemImpares);
}