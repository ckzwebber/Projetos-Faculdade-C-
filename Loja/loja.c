#include <stdio.h>

int main()
{
    char codigo = 'z';
    float valor, totalVista = 0, totalPrazo = 0, totalCompras = 0;

    printf("Digite as transacoes de vendas (x para encerrar):\n");

    while (codigo != 'x' && codigo != 'X')
    {
        printf("Tipo da compra (V - A Vista ou P - A Prazo): ");
        scanf(" %c", &codigo);

        if (codigo == 'x' || codigo == 'X')
        {
            break;
        }

        printf("Valor da transacao: ");
        scanf("%f", &valor);

        if (codigo == 'V' || codigo == 'v')
        {
            totalVista += valor;
        }
        else if (codigo == 'P' || codigo == 'p')
        {
            totalPrazo += valor;
        }

        totalCompras += valor;
    }

    printf("\nValor total de compras a vista: %.2f\n", totalVista);
    printf("Valor total de compras a prazo: %.2f\n", totalPrazo);
    printf("Valor total de compras efetuadas: %.2f\n", totalCompras);
}