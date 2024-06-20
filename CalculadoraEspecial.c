#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    float n1, n2, operacao;

    printf("Digite dois numeros: \n");
    scanf("%f", &n1);
    scanf("%f", &n2);

    printf("Escolha uma operacao para esses numeros: \n");
    printf("1. O primeiro numero elevado ao segundo. \n");
    printf("2. Raiz quadrada de cada um dos numeros. \n");
    printf("3. Raiz cubica de cada um dos numeros. \n");
    scanf("%f", &operacao);

    if (operacao == 1)
    {
        operacao = pow(n1, n2);
        printf("O primeiro numero elevado ao segundo e: %.2f.", operacao);
    }
    else if (operacao == 2)
    {

        n1 = sqrt(n1);
        n2 = sqrt(n2);
        printf("A raiz quadrada de cada um dos numeros e: %.2f e %.2f.", n1, n2);
    }

    else if (operacao == 3)
    {
        n1 = cbrt(n1);
        n2 = cbrt(n2);
        printf("A raiz cubica de cada um dos numeros.: %.2f e %.2f.", n1, n2);
    }
    else
    {
        printf("Escolha uma operacao valida. \n");
        return 1;
    }
    return 0;
    system("pause");
}