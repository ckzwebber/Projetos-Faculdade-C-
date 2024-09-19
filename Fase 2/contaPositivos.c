#include <stdio.h>

int positiveCount(int number)
{
    if (number > 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main(void)
{
    int number, countOfPositive = 0;

    do
    {
        printf("\nPressione 0 para parar. \n");
        printf("Digite um numero: ");
        scanf("%d", &number);
        countOfPositive += positiveCount(number);
        printf("A quantidade de positivos e: %d.\n", countOfPositive);
        fflush(stdin);
    } while (number != 0);

    return 0;
}