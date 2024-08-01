#include <stdio.h>

int main()
{
    int idade, totalPessoas = 0, totalFeminino = 0, totalMasculino = 0;
    float idadeMedia = 0;

    while (idade != 0)
    {

        printf("Digite a idade (ou 0 para sair): ");
        scanf("%d", &idade);

        if (idade != 0)
        {
            char sexo;
            fflush(stdin);
            printf("Digite o sexo (M/F): ");
            scanf("%c", &sexo);

            idadeMedia += idade;
            totalPessoas++;

            if (sexo == 'F' || sexo == 'f')
            {
                totalFeminino++;
            }
            else if (sexo == 'M' || sexo == 'm')
            {
                totalMasculino++;
            }
        }
    }

    if (totalPessoas > 0)
    {
        idadeMedia /= totalPessoas;
        printf("Idade media: %.2f\n", idadeMedia);
        printf("Total de pessoas do sexo feminino: %d\n", totalFeminino);
        printf("Total de pessoas do sexo masculino: %d\n", totalMasculino);
    }
    else
    {
        printf("Nenhuma pessoa foi registrada.\n");
    }

    return 0;
}