#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    int segundos, minutos, horas;

    printf("Qual e o tempo em segundos? \n");
    scanf("%d", &segundos);

    horas = segundos / 3600;
    segundos = segundos - (3600 * horas);
    minutos = segundos / 60;
    segundos = segundos - (60 * minutos);

    printf("Passaram se: %d horas, %d minutos e %d segundos\n", horas, minutos, segundos);
    printf("Passaram se: %d:%d:%d \n", horas, minutos, segundos);

    system("pause");
    return 0;
}