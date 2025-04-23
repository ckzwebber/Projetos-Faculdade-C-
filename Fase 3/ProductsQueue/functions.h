#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "struct.h"

void startQueue(Queue *queue)
{
	queue->front = 0;
	queue->back = -1;
	queue->size = 0;
}

void isFull(Queue *queue, int *result)
{
	*result = (queue->size == ARR);
}

void isEmpty(Queue *queue, int *result)
{
	*result = (queue->size == 0);
}

void enqueue(Queue *queue, Product product)
{
	int full;
	isFull(queue, &full);
	if (full)
	{
		printf("\nA fila esta cheia!\n");
		return;
	}
	queue->back = (queue->back + 1) % ARR;
	queue->products[queue->back] = product;
	queue->size++;

	printf("\nProduto que entrou na queue: %s\n", product.name);
}

void dequeue(Queue *queue)
{
	int empty;
	isEmpty(queue, &empty);
	if (empty)
	{
		printf("\nA fila esta vazia!\n");
		return;
	}

	Product product = queue->products[queue->front];
	queue->front = (queue->front + 1) % ARR;
	queue->size--;
	printf("\nDesinfilerado: %s\n", product.name);
}

void show(Queue *queue)
{
	int empty;
	isEmpty(queue, &empty);
	if (empty)
	{
		printf("\nA fila esta vazia!\n");
		return;
	}

	printf("\n -- Fila -- \n");
	printf("Tamanho da fila: %d\n", queue->size);
	printf("Elementos: \n");
	printf("ID | Nome | Preco\n");
	for (int i = 0; i < queue->size; i++)
	{
		int index = (queue->front + i) % ARR;
		Product product = queue->products[index];
		printf("%d | %s | R$%.2f\n", product.id, product.name, product.price);
	}

	printf("\n");
}