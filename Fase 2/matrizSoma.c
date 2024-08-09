#include <stdio.h>

int main(void)
{
    int i, j, M[2][3], P[2][3], S[2][3];

    printf("Preencha as matrizes: \n");

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Digite para a matriz M: \n");
            scanf("%d", &M[i][j]);
        }
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Digite para a matriz P: \n");
            scanf("%d", &P[i][j]);
            S[i][j] = M[i][j] + P[i][j];
        }
    }

    printf("Imprimindo S: \n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d \t", S[i][j]);
        }
        printf("\n");
    }
    return 0;
}