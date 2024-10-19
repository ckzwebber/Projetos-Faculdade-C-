#include <stdio.h>
#include <math.h>

void toCube(int number, int *result);

int main(void)
{
    int number, result;

    printf("Digite um numero a ser elevado ao cubo: ");
    scanf("%d", &number);

    toCube(number, &result);

    printf("\nO numero %d ao cubo e: %d.\n", number, result);

    return 0;
}

void toCube(int number, int *result) 
{
    *result = pow(number, 3);
}