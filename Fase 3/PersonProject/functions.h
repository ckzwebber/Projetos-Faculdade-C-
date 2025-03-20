void addPerson()
{
    if (personOnSystem >= MAXPERSON)
    {
        printf("\nNao e possivel adicionar mais usuarios!\n");
        return;
    }

    printf("\nDigite o Nome: \n");
    scanf(" %[^\n]s", listOfPerson[personOnSystem].name);
    printf("\nDigite a idade: \n");
    scanf("%d", &listOfPerson[personOnSystem].age);
    printf("\nDigite a cidade: \n");
    scanf(" %[^\n]s", listOfPerson[personOnSystem].city);
    printf("\nDigite a altura: \n");
    scanf("%f", &listOfPerson[personOnSystem].height);
    printf("\nDigite o trabalho: \n");
    scanf(" %[^\n]s", listOfPerson[personOnSystem].work.name);
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
        printf("%d | %s | %d anos | %s | %.2f | %s. \n", i, listOfPerson[i].name, listOfPerson[i].age, listOfPerson[i].city, listOfPerson[i].height, listOfPerson[i].work.name);
        printf("-------------------------------------------------------------------\n");
    }
}

void editPerson()
{
    int idToEdit;

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
    }

    personOnSystem--;

    printf("\nUsuario excluido com sucesso!\n");
}
