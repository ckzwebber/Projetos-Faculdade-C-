#include <stdlib.h>
#include <stdio.h>

int main(void)
{

    float alturadegrau, alturarequerida, qntdegraus;

    printf("Digite a altura dos degraus de uma escada: ");
    scanf("%f", &alturadegrau);

    printf("Digite qual altura voce quer atingir subindo essa escada: ");
    scanf("%f", &alturarequerida);

    qntdegraus = alturarequerida / alturadegrau;

    printf("Voce vai ter que subir %.2f degraus para atingir essa altura! \n", qntdegraus);

    system("pause");
    return 0;
}