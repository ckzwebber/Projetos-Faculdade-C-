#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    float horas_extras, horas_faltadas, premio, recompenca;

    printf("Digite o numero de horas extras trabalhadas: \n");
    scanf("%f", &horas_extras);
    printf("Digite o numero de horas faltadas: \n");
    scanf("%f", &horas_faltadas);

    premio = horas_extras - (2 / 3 * horas_faltadas);

    if (premio < 600)
    {
        recompenca = 100;
    }
    else if (premio < 1200)
    {
        recompenca = 200;
    }
    else if (premio < 1800)
    {
        recompenca = 300;
    }
    else if (premio < 2400)
    {
        recompenca = 400;
    }
    else if (premio >= 2400)
    {
        recompenca = 500;
    }

    printf("O valor da recompenca e: %.2f\n", recompenca);

    return 0;
    system("pause");
}