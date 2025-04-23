#include <stdio.h>

typedef struct
{
    int valor;
} opcaoMenu;

void adicionarValor()
{
    int valor;
    printf("Digite um valor: ");
    scanf("%d", &valor);
    if (valor > 0)
    {
        printf("O valor e positivo: %d\n", valor);
    }
    else
    {
        printf("O valor e negativo ou igual a 0: %d\n", valor);
    }
}

void somarPares()
{
    int i, soma = 0;
    for (i = 1; i <= 10; i++)
    {
        if (i % 2 == 0)
        {
            soma += i;
        }
    }
    printf("Soma dos pares de 1 a 10: %d\n", soma);
}

void imprimirNumeros1a5Decrescente()
{
    int i;
    for (i = 5; i >= 1; i--)
    {
        printf("%d ", i);
    }
    printf("\n");
}

void calculaMediaDe5Valores(float *num)
{
    int i;
    float soma = 0;
    printf("Digite 5 numeros: ");
    for (i = 0; i < 5; i++)
    {
        scanf("%f", &*num);
        soma += *num;
    }
    printf("Media: %.2f\n", soma / 5);
}

void identificarNumerosParesEImparesAte20()
{
    int i;
    for (i = 1; i <= 20; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d e par!\n", i);
            continue;
        }
        printf("%d e impar!\n", i);
    }
}

int main()
{

    opcaoMenu opcao;
    float num;

    do
    {
        printf("\nMENU\n");
        printf("1 - Adicionar um valor\n");
        printf("2 - Somar Pares\n");
        printf("3 - Imprimir numeros de 1 a 5 decrescentemente\n");
        printf("4 - Calcular media de 5 numeros digitados\n");
        printf("5 - Identificar numeros Pares e Impares ate 20 valores digitados\n");
        printf("0 - Sair\n");

        printf("Escolha uma opcao: ");
        scanf("%d", &opcao.valor);

        switch (opcao.valor)
        {
        case 0:
            printf("Saindo do menu...");
            break;
        case 1:
            adicionarValor();
            break;
        case 2:
            somarPares();
            break;
        case 3:
            imprimirNumeros1a5Decrescente();
            break;
        case 4:
            calculaMediaDe5Valores(&num);
            break;
        case 5:
            identificarNumerosParesEImparesAte20();
            break;
        default:
            printf("Opcao invalida!\n");
            return 1;
        }
    } while (opcao.valor != 0);

    return 0;
}