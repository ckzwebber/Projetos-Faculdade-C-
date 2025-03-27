#include "structs.h"

void addPerson()
{
    if (personOnSystem >= MAXPERSON)
    {
        printf("\nNao e possivel adicionar mais usuarios!\n");
        return;
    }

    char areToSell;

    printf("\nDigite o nome: \n");
    scanf(" %[^\n]s", listOfPerson[personOnSystem].name);
    printf("\nDigite a idade: \n");
    scanf("%d", &listOfPerson[personOnSystem].age);
    printf("\nDigite a cidade: \n");
    scanf(" %[^\n]s", listOfPerson[personOnSystem].city);
    printf("\nDigite a altura: \n");
    scanf("%f", &listOfPerson[personOnSystem].height);
    printf("\nDigite o trabalho: \n");
    scanf(" %[^\n]s", listOfPerson[personOnSystem].work.name);
    printf("\nDigite o nome do carro: \n");
    scanf(" %[^\n]s", listOfPerson[personOnSystem].vehicle.name);
    printf("\nO carro esta a venda? (V ou F).\n");
    scanf("%s", &areToSell);
    printf("\nDigite o nome do pet: \n");
    scanf(" %[^\n]s", listOfPerson[personOnSystem].pet.name);
    printf("\nDigite a raca do pet: \n");
    scanf(" %[^\n]s", listOfPerson[personOnSystem].pet.race);
    printf("\nDigite a idade do pet: \n");
    scanf("%d", &listOfPerson[personOnSystem].pet.age);

    if (areToSell == 'V' || areToSell == 'v')
    {
        listOfPerson[personOnSystem].vehicle.areToSell = true;
    }
    else if ('F' || areToSell == 'f')
    {
        listOfPerson[personOnSystem].vehicle.areToSell = false;
    }

    personOnSystem++;
    printf("\nUsuario Cadastrado.\n");
}

void showPerson()
{
    if (personOnSystem == 0)
    {
        printf("\n\nA lista de usuarios esta vazia.\n\n");
        return;
    }

    printf("\nUsuarios: \n");

    printf("\nId | Nome | Idade | Cidade | Altura | Trabalho\n");
    printf("-------------------------------------------------------------------\n");
    for (int i = 0; i < personOnSystem; i++)
    {
        if (listOfPerson[i].vehicle.areToSell == true)
        {
            printf("%d | %s | %d anos | %s | %.2f | %s | Pet %s, com %d anos e da raca %s | Quer vender seu carro: %s. \n", i, listOfPerson[i].name, listOfPerson[i].age, listOfPerson[i].city, listOfPerson[i].height, listOfPerson[i].work.name, listOfPerson[i].pet.name, listOfPerson[i].pet.age, listOfPerson[i].pet.race, listOfPerson[i].vehicle.name);
            printf("-------------------------------------------------------------------\n");
        }
        else
        {
            printf("%d | %s | %d anos | %s | %.2f | %s | Pet %s, com %d anos e da raca %s \n", i, listOfPerson[i].name, listOfPerson[i].age, listOfPerson[i].city, listOfPerson[i].height, listOfPerson[i].work.name, listOfPerson[i].pet.name, listOfPerson[i].pet.age, listOfPerson[i].pet.race);
            printf("-------------------------------------------------------------------\n");
        }
    }
}

void editPerson()
{
    int idToEdit;
    char areToSell;

    printf("\nDigite o id do usuario a ser editado: \n");
    scanf("%d", &idToEdit);

    if (idToEdit < 0 || idToEdit >= personOnSystem)
    {
        printf("\nId invalido! \n");
    }

    printf("\nDigite o novo nome: \n");
    scanf(" %[^\n]s", listOfPerson[idToEdit].name);

    printf("\nDigite a nova idade: \n");
    scanf("%d", &listOfPerson[idToEdit].age);

    printf("\nDigite a nova cidade: \n");
    scanf(" %[^\n]s", listOfPerson[idToEdit].city);

    printf("\nDigite a nova altura: \n");
    scanf("%f", &listOfPerson[idToEdit].height);

    printf("\nDigite o novo trabalho: \n");
    scanf(" %[^\n]s", listOfPerson[idToEdit].work.name);

    printf("\nDigite o novo nome do carro: \n");
    scanf(" %[^\n]s", listOfPerson[personOnSystem].vehicle.name);

    printf("\nAgpra o carro esta a venda? (V ou F).\n");
    scanf("%s", &areToSell);

    printf("\nDigite o novo nome do pet: \n");
    scanf(" %[^\n]s", listOfPerson[personOnSystem].pet.name);

    printf("\nDigite a nova raca do pet: \n");
    scanf(" %[^\n]s", listOfPerson[personOnSystem].pet.race);

    printf("\nDigite a nova idade do pet: \n");
    scanf("%d", &listOfPerson[personOnSystem].pet.age);

    if (areToSell == 'V' || areToSell == 'v')
    {
        listOfPerson[personOnSystem].vehicle.areToSell = true;
    }
    else if ('F' || areToSell == 'f')
    {
        listOfPerson[personOnSystem].vehicle.areToSell = false;
    }

    printf("\nEditado com sucesso!\n");
}

void deletePerson()
{
    int i, idToDelete;

    printf("\nDigite o id do usuario a ser excluido: \n");
    scanf("%d", &idToDelete);

    if (idToDelete < 0 || idToDelete >= personOnSystem)
    {
        printf("\nId invalido! \n");
        return;
    }

    printf("\nUsuario a ser deletado: \n");
    printf("Id | Nome | Idade | Cidade | Altura | Trabalho\n");
    printf("-------------------------------------------------------------------\n");
    printf("%d | %s | %d anos | %s | %2.f | %s.\n", idToDelete, listOfPerson[idToDelete].name, listOfPerson[idToDelete].age, listOfPerson[idToDelete].city, listOfPerson[idToDelete].height, listOfPerson[idToDelete].work.name);
    printf("-------------------------------------------------------------------\n");

    for (i = idToDelete; i < personOnSystem; i++)
    {
        strcpy(listOfPerson[i].name, listOfPerson[i + 1].name);
        listOfPerson[i].age = listOfPerson[i + 1].age;
        strcpy(listOfPerson[i].city, listOfPerson[i + 1].city);
        listOfPerson[i].height = listOfPerson[i + 1].height;
        strcpy(listOfPerson[i].work.name, listOfPerson[i + 1].work.name);
        strcpy(listOfPerson[i].vehicle.name, listOfPerson[i + 1].vehicle.name);
        listOfPerson[i].vehicle.areToSell = listOfPerson[i + 1].vehicle.areToSell;
        strcpy(listOfPerson[i].pet.name, listOfPerson[i + 1].pet.name);
        strcpy(listOfPerson[i].pet.race, listOfPerson[i + 1].pet.race);
        listOfPerson[i].pet.age = listOfPerson[i + 1].pet.age;
    }

    personOnSystem--;

    printf("\nUsuario excluido com sucesso!\n");
}
