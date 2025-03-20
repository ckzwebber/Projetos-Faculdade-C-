#define MAXPERSON 100
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <functions.h>
#include <structs.h>

int personOnSystem = 0;
Person listOfPerson[MAXPERSON];

int main(void)
{
    int option;

    do
    {
        printf("\nMenu:\n");
        printf("1 - Adicionar Usuario.\n");
        printf("2 - Mostrar Usuarios.\n");
        printf("3 - Editar Usuario.\n");
        printf("4 - Excluir Usuario.\n");
        printf("0 - Sair. \n\n");
        scanf("%d", &option);

        switch (option)
        {
        case 1:
            addPerson();
            break;

        case 2:
            showPerson();
            break;

        case 3:
            editPerson();
            break;

        case 4:
            deletePerson();
            break;

        case 0:
            printf("\nSaindo do menu...\n");
            break;

        default:
            printf("\nOpcao invalida!\n");
            return 1;
            break;
        }
    } while (option != 0);

    return 0;
}