#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    float idade, peso;

    printf("Digite a idade de uma pessoa: \n");
    scanf("%f", &idade);

    printf("Digite o peso de uma pessoa: \n");
    scanf("%f", &peso);

    if (idade < 20 && peso < 60)
    {
        printf("O grupo de risco e 9. \n");
    }
    else if (idade < 20 && peso < 90)
    {
        printf("O grupo de risco e 8. \n");
    }
    else if (idade < 20 && peso >= 90)
    {
        printf("O grupo de risco e 7. \n");
    }
    else if (idade >= 20 && idade <= 50 && peso < 60)
    {
        printf("O grupo de risco e 6. \n");
    }
    else if (idade >= 20 && idade <= 50 && peso < 90)
    {
        printf("O grupo de risco e 5. \n");
    }
    else if (idade >= 20 && idade <= 50 && peso >= 90)
    {
        printf("O grupo de risco e 4. \n");
    }
    else if (idade > 50 && peso < 60)
    {
        printf("O grupo de risco e 3. \n");
    }
    else if (idade > 50 && peso < 90)
    {
        printf("O grupo de risco e 2. \n");
    }
    else if (idade > 50 && peso >= 90)
    {
        printf("O grupo de risco e 1. \n");
    }
    else
    {
        printf("Nao foi possível identificar o grupo de risco. \n");
    }

    system("pause");
    return 0;
}