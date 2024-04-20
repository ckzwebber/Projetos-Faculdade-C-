#include <stdio.h>
#include <stdlib.h>

int main()
{

    float hora_do_dia, minutos_passados;

    printf("Informe um valor de hora: \n");
    scanf("%f", &hora_do_dia);
    printf("\n");

    minutos_passados = hora_do_dia * 60;

    if (minutos_passados > 1)
    {
        printf("Já se passaram %.2f minutos desde o início do dia! \n", minutos_passados);
        printf("\n");
    }

    else
    {
        printf("Já se passaram %.2f minuto desde o início do dia! \n", minutos_passados);
        printf("\n");
    }

    system("pause");
    return 0;
}