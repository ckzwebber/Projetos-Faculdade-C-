#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float preco_produto, numero_origem;

    printf("Digite o preco do produto: \n");
    scanf("%f", &preco_produto);

    printf("Digite o numero de origem desse produto: \n");
    scanf("%f", &numero_origem);

    if (numero_origem == 1)
    {
        printf("A procedencia desse produto e: Sul\n");
    }
    else if (numero_origem == 2)
    {
        printf("A procedencia desse produto e: Norte\n");
    }
    else if (numero_origem == 3)
    {
        printf("A procedencia desse produto e: Leste\n");
    }
    else if (numero_origem == 4)
    {
        printf("A procedencia desse produto e: Oeste\n");
    }
    else if (numero_origem == 5 || numero_origem == 6)
    {
        printf("A procedencia desse produto e: Nordeste\n");
    }
    else if (numero_origem == 7 || numero_origem == 8 || numero_origem == 9)
    {
        printf("A procedencia desse produto e: Sudeste\n");
    }
    else if (numero_origem <= 20)
    {
        printf("A procedencia desse produto e: Centro-Oeste\n");
    }
    else if (numero_origem < 30)
    {
        printf("A procedencia desse produto e: Nordeste\n");
    }
    else
    {
        printf("Numero de origem invalido!\n");
    }

    system("pause");
    return 0;
}