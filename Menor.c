#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float n1, n2, n3;

    printf("Digite tres numeros: \n");
    scanf("%f", &n1);
    scanf("%f", &n2);
    scanf("%f", &n3);

    if (n1 == n2 && n2 == n3)
    {
        printf("Os numeros sao iguais. (%.2f)", n1);
    }
    else if (n1 < n2 && n1 < n3)
    {
        printf("O menor numero e: %.2f", n1);
    }
    else if (n2 < n1 && n2 < n3)
    {
        printf("O menor numero e: %.2f", n2);
    }
    else
    {
        printf("O menor numero e: %.2f", n3);
    }
    return 0;
    system("pause");
}