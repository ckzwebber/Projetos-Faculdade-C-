#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, n1 = 1, n2 = 1, proximo;

    for (i = 1; i <= 10; i++)
    {
        printf("%d ", n1);
        proximo = n1 + n2;
        n1 = n2;
        n2 = proximo;
    }
    return 0;
}
