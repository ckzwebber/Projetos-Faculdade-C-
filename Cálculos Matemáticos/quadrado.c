#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{

    float num, quadrado, cubo, raizqua, raizcub;

    printf("Digite um numero: ");
    scanf("%f", &num);

    if (num < 1)
    {
        printf("Por favor, digite um numero maior que zero!");
        return 1;
    }
    else
    {

        quadrado = pow(num, 2);
        cubo = pow(num, 3);
        raizqua = sqrt(num);
        raizcub = cbrt(num);

        printf("O quadrado desse numero e: %.2f. \n", quadrado);
        printf("O cubo desse numero e: %.2f. \n", cubo);
        printf("A raiz quadrada desse numero e: %.2f. \n", raizqua);
        printf("A raiz cubica desse numero e: %.2f. \n", raizcub);
        system("pause");
        return 0;
    }
}