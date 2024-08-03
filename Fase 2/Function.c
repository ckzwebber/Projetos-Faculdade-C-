#include <stdio.h>

int somaDoisNumerosEImprime(int x, int y)
{
    return printf("\nA soma dos numeros e: %d.\n", x + y);
}

int main(void)
{
    somaDoisNumerosEImprime(20, 5);
    return 0;
}