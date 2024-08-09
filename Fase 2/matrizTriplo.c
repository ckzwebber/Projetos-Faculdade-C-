#include <stdio.h>

int main(void)
{
    int i, j;
    float numbers[2][3], numbersTriple[2][3];

    printf("Preencha a matriz 2x3: \n");

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Numero -> ");
            scanf("%f", &numbers[i][j]);
            numbersTriple[i][j] = (numbers[i][j] * 3);
        }
    }

    printf("Imprimindo: \n");

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%.2f \t", numbersTriple[i][j]);
        }
        printf("\n");
    }
    return 0;
}