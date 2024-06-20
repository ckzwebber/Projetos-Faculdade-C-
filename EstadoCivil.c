#include <stdio.h>

int main()
{
    int idade, totalSolteiro = 0, totalCasado = 0, totalViuva = 0, totalSeparado = 0, total = 0;
    float porcentoSeparado = 0;

    while (idade != 0)
    {

        printf("Digite a idade (ou 0 para sair): ");
        scanf("%d", &idade);

        if (idade != 0)
        {
            fflush(stdin);
            char estadoCivil;
            printf("Digite o Estado Civil: \n C - Casado \n S - Solteiro \n V - Viuvo \n D - desquitado ou separado\n ");
            scanf("%c", &estadoCivil);
            total++;

            switch (estadoCivil)
            {
            case 'C':
                totalCasado++;
                break;

            case 'S':
                totalSolteiro++;
                break;

            case 'V':
                totalViuva++;
                break;

            case 'D':
                totalSeparado++;
                break;

            default:
                printf("Estado Civil invalido\n");
                return 1;
                break;
            }
        }
    }

    if (total > 0)
    {
        porcentoSeparado = (totalSeparado * 100) / total;
        printf("Total de pessoas solteiras: %d\n", totalSolteiro);
        printf("Total de pessoas casadas: %d\n", totalCasado);
        printf("Total de pessoas viuvas: %d\n", totalViuva);
        printf("Total de pessoas separadas: %d\n", totalSeparado);
        printf("Porcentagem de pessoas separadas: %.2f%%\n", porcentoSeparado);
    }
    else
    {
        printf("Nenhuma pessoa foi registrada.\n");
    }

    return 0;
}