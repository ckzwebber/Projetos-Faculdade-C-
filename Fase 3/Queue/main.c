#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "struct.h"
#include "functions.h"

void startQueue(Queue *q);
void enqueue(Queue *q, int value);
void dequeue(Queue *q);
void show(Queue *q);

int main(void)
{

	Queue queue;
	startQueue(&queue);

	int option, value;
	printf("\nEscolha uma opcao:\n");

	do
	{
		printf("\n1 - Enfileirar\n2 - Desenfileirar\n3 - Mostrar\n4 - Sair\n");
		printf("\nOpcao: ");
		scanf("%d", &option);
		switch (option)
		{
		case 1:
			printf("\nDigite o valor a ser enfileirado: ");
			scanf("%d", &value);
			enqueue(&queue, value);
			break;

		case 2:
			dequeue(&queue);
			break;

		case 3:
			show(&queue);
			break;

		case 4:
			printf("\nSaindo...\n");
			break;

		default:
			printf("\nOpcao Invalida. \n");
		}
	} while (option != 4);

	return 0;
}
