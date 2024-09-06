#include <stdio.h>

int mostraTodosOsImparesEntre250e500()
{
    int i, soma = 0;

    for (i = 250; i < 500; i++)
    {
        if (i % 2 != 0)
        {
            printf("%d \t", i);
            soma += i;
        }
    }
    return printf("\nA soma dos numeros e: %d\n", soma);
}

int main(void)
{
    mostraTodosOsImparesEntre250e500();
}