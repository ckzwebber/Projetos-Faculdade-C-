#include <stdio.h>
#include <string.h>
#include <ctype.h>

void alternaString(char string[50])
{
    int i;

    int tamanhoString = strlen(string);

    for (i = 0; i < tamanhoString; i++)
    {
        if (i % 2 == 0)
        {
            string[i] = tolower(string[i]);
        }
        else
        {
            string[i] = toupper(string[i]);
        }
    }

    printf("A nova string:\n");
    printf("%s", string);
    printf("\n\n");
}

int main(void)
{
    char string[50];

    printf("\nDigite uma string: ");
    gets(string);

    alternaString(string);
}