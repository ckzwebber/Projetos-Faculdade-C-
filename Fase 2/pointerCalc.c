#include <Stdio.h>
#include <math.h>

void calculaExpresao(float *x, float *y, float *result);

int main(void)
{
    float x, y, result;

    printf("Digite um x e um y para a expresao: x2 - y + 10... \n");
    printf("x: ");
    scanf("%f", &x);
    printf("\ny: ");
    scanf("%f", &y);

    calculaExpresao(&x, &y, &result);

    printf("\nO resultado da expressao e: %.2f.\n", result);
    
    return 0;
}

void calculaExpresao(float *x, float *y, float *result)
{
    *result = (pow(*x, 2)) - *y + 10;
}