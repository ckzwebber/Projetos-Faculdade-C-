#include <stdio.h>

typedef struct
{
    int idade, numeroFilhos;
    char sexo;
    float salario;
} habitante;

void coletarDados(habitante habitantes[], int total);
float calcularMediaSalarios(habitante habitantes[], int total);
void mostrarMulheresAcima18(habitante habitantes[], int total);

int main()
{
    habitante habitantes[500];
    float mediaSalarios;

    coletarDados(habitantes, 500);

    mediaSalarios = calcularMediaSalarios(habitantes, 500);
    printf("\nMedia dos salarios dos habitantes: %.2f\n", mediaSalarios);

    printf("\nMulheres acima de 18 anos:\n");
    mostrarMulheresAcima18(habitantes, 500);

    return 0;
}

void coletarDados(habitante habitantes[], int total)
{
    int i;

    for (i = 0; i < total; i++)
    {
        printf("\nDigite a idade: ");
        scanf("%d", &habitantes[i].idade);

        printf("Digite o sexo M/F: ");
        fflush(stdin);
        scanf(" %c", &habitantes[i].sexo);

        printf("Digite o salario: ");
        scanf("%f", &habitantes[i].salario);

        printf("Digite o numero de filhos: ");
        scanf("%d", &habitantes[i].numeroFilhos);
    }
}

float calcularMediaSalarios(habitante habitantes[], int total)
{
    int i;
    float somaSalarios = 0;

    for (i = 0; i < total; i++)
    {
        somaSalarios += habitantes[i].salario;
    }

    return somaSalarios / total;
}

void mostrarMulheresAcima18(habitante habitantes[], int total)
{
    int i;
    for (i = 0; i < total; i++)
    {
        if (habitantes[i].sexo == 'F' || habitantes[i].sexo == 'f')
        {
            if (habitantes[i].idade > 18)
            {
                printf("\nIdade: %d\n", habitantes[i].idade);
                printf("Salario: %.2f\n", habitantes[i].salario);
                printf("Numero de filhos: %d\n", habitantes[i].numeroFilhos);
            }
        }
    }
}
