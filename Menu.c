#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{

    int opcao;
    float n1, resultado;

    printf("Menu de Opcoes: \n");
    printf("1. Arredondamento para Baixo. \n");
    printf("2. Arredondamento para Cima. \n");
    printf("3. Logaritmo Natural. \n");
    printf("4. Logaritmo de Base 10. \n");
    printf("5. Valor Absoluto. \n");
    printf("6. Parte Inteira. \n");
    printf("7. Parte Decimal. \n");
    printf("8. Quadrado. \n");
    printf("9. Raiz Quadrada. \n");
    scanf("%d", &opcao);
    printf("\n");

    printf("Digite o seu numero: \n");
    scanf("%f", &n1);
    printf("\n");

    switch (opcao)
    {
    case 1:
        resultado = floor(n1);
        break;

    case 2:
        resultado = ceil(n1);
        break;

    case 3:
        resultado = log(n1);
        break;

    case 4:
        resultado = log10(n1);
        break;

    case 5:
        resultado = fabs(n1);
        break;

    case 6:
        resultado = trunc(n1);
        break;

    case 7:
        resultado = n1 - trunc(n1);
        break;

    case 8:
        resultado = pow(n1, 2);
        break;

    case 9:
        resultado = sqrt(n1);
        break;
    }

    printf("O resultado e: %.2f. \n", resultado);
    system("pause");
    return 0;
}