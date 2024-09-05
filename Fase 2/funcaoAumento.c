#include <stdio.h>
#include <string.h>

void enviaMensagemDeNegacaoAoAumento()
{
    printf("Voce nao ira receber aumento pois recebe mais que R$500. \n");
}

void verificaSeReceberaAumento(float salario)
{
    if (salario <= 500)
    {
        salario *= 1.3;
        printf("O salario reajustado e: %.2f \n", salario);
    }
    else
    {
        enviaMensagemDeNegacaoAoAumento();
    }
}

int main(void)
{
    float salario;

    printf("Digite um salario: ");
    scanf("%f", &salario);

    verificaSeReceberaAumento(salario);
}
