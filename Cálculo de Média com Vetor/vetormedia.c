#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

int main(void)
{

    setlocale(LC_ALL, "portuguese");
    int vetor[5], i, media;
    float s;

    printf("Digite 5 números: \n");

    for (i = 0; i <= 4; i++)
    {
        scanf("%d", &vetor[i]);

        s += vetor[i];
    }

    media = s / 5;

    printf("Sua média: %d\n", media);

    system("pause");
    return 0;
}