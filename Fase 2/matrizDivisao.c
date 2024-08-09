#include <stdio.h>

int main(void)
{
    int i, j;
    float numbers[2][3], numbersbyTwo[2][3];

    printf("Preencha a matriz 2x3: \n");

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Numero -> ");
            scanf("%f", &numbers[i][j]);
            numbersbyTwo[i][j] = (numbers[i][j] / 2);
        }
    }

    printf("Imprimindo: \n");

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%.2f \t", numbersbyTwo[i][j]);
        }
        printf("\n");
    }
    return 0;
}