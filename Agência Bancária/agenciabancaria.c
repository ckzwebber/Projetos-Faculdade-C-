#include <stdio.h>

int main()
{
    int conta, totalClientes = 0, totalNegativo = 0;
    float saldo, saldoAgencia = 0.0, percentualPositivo;

    while (totalClientes < 10000)
    {
        printf("Digite o numero da conta (-999 para sair): ");
        scanf("%d", &conta);

        if (conta == -999)
        {
            break;
        }

        fflush(stdin);
        printf("Digite o nome do cliente: ");
        char nome[50];
        gets(nome);
        fflush(stdin);

        printf("Digite o saldo do cliente: ");
        scanf("%f", &saldo);

        printf("Conta: %d\n", conta);
        printf("Saldo: %.2f\n", saldo);

        if (saldo >= 0)
        {
            printf("Mensagem: positivo\n");
        }
        else
        {
            printf("Mensagem: negativo\n");
            totalNegativo++;
        }

        totalClientes++;
        saldoAgencia += saldo;
    }

    printf("Total de clientes com saldo negativo: %d\n", totalNegativo);
    printf("Total de clientes da agencia: %d\n", totalClientes);
    percentualPositivo = (totalClientes - totalNegativo) * 100.0 / totalClientes;
    printf("Percentual de clientes com saldo positivo: %.2f%%\n", percentualPositivo);
    printf("Saldo da agencia: %.2f\n", saldoAgencia);

    return 0;
}