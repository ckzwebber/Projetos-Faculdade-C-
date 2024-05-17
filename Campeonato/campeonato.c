#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, z, idade = 0, saveIdade = 0, mediaIdade = 0;
    float peso = 0, savePeso = 0, mediaPeso = 0;

    for (i = 1; i < 21; i++)
    {
        printf("Digite os dados do time %d.\n", i);
        for (z = 1; z < 23; z++)
        {
            printf("Peso do jogador %d: ", z);
            scanf("%f", &peso);
            savePeso += peso;

            printf("Idade do jogador %d: ", z);
            scanf("%d", &idade);
            saveIdade += idade;
        }
        mediaPeso = savePeso / 22;
        mediaIdade = saveIdade / 22;
        printf("A media de peso do time %d e: %.2f.\n", i, mediaPeso);
        printf("A media de idade do time %d e: %d.\n", i, mediaIdade);
        savePeso = 0;
        saveIdade = 0;
        mediaPeso = 0;
        mediaIdade = 0;
    }
    return 0;
}