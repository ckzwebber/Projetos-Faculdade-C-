#define MAX_ARRAY 100
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "functions.h"
#include "structs.h"

Stack stack;

int main(void)
{
    start(&stack);

    int option;
    char name[50];

    do
    {
        printf("\nMenu\n");
        printf("1 - Empilhar\n");
        printf("2 - Desempilhar\n");
        printf("3 - Mostrar\n");
        printf("0 - Sair\n");
        printf("Opcao: ");
        scanf("%d", &option);

        switch (option)
        {
        case 1:
            printf("Digite o nome: ");
            scanf("%s", name);
            push(&stack, name);
            break;

        case 2:
            pop(&stack);
            break;

        case 3:
            show(&stack);
            break;

        case 0:
            printf("Saindo...\n");
            break;
        }
    } while (option != 0);

    return 0;
}