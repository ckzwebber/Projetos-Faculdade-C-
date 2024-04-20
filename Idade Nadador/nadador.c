#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int idade_nadador;

    printf("Digite a idade do nadador: ");
    scanf("%d", &idade_nadador);

    if (idade_nadador < 5)
    {
        printf("Idade Invalida. \n");
        return 1;
        exit;
    }

    switch (idade_nadador)
    {
    case 5 ... 7:
        printf("Infantil A. \n");
        break;

    case 8 ... 10:
        printf("Infantil B. \n");
        break;

    case 11 ... 13:
        printf("Juvenil A. \n");
        break;

    case 14 ... 17:
        printf("Juvenil B. \n");
        break;

    default:
        printf("Senior. \n");
        break;
    }
}