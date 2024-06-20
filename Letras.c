#include <stdio.h>

int main(void)
{
    char letra;
    letra = 'a';

    while (letra != 'f' && letra != 'F')
    {
        printf("Digite uma letra: ");
        scanf("%c", &letra);
        printf("%c\n", letra);
        fflush(stdin);
    }
}