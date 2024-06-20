#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    int operacao, n1, n2, resultado;

    printf("Menu de Opcoes: \n");
    printf("1 - Soma \n");
    printf("2 - Subtracao \n");
    printf("3 - Multiplicacao \n");
    printf("4 - Divisao \n");
    printf("Digite a opcao desejada: ");
    scanf("%d", &operacao);
    printf("\n");

    if (operacao < 1 || operacao > 4)
    {
        printf("Opcao inexistente!");
        return 1;
    }

    printf("Digite o primeiro numero: \n");
    scanf("%d", &n1);
    printf("\n");

    printf("Digite o segundo numero: \n");
    scanf("%d", &n2);
    printf("\n");

    switch (operacao)
    {
    case 1:
        resultado = n1 + n2;
        break;

    case 2:
        resultado = n1 - n2;
        break;

    case 3:
        resultado = n1 * n2;
        break;

    case 4:
        resultado = n1 / n2;
        break;
    }

    printf("O resultado e: %d. \n", resultado);
    system("pause");
    return 0;
}