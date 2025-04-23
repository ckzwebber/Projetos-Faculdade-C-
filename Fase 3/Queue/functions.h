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

void enqueue(Queue *queue, int value)
{
	int full;
	isFull(queue, &full);
	if (full)
	{
		printf("\nA fila esta cheia!\n");
		return;
	}
	queue->back = (queue->back + 1) % ARR;
	queue->items[queue->back] = value;
	queue->size++;

	printf("\nValor que entrou na queue: %d\n", value);
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

	int value = queue->items[queue->front];
	queue->front = (queue->front + 1) % ARR;
	queue->size--;
	printf("\nDesinfilerado: %d\n", value);
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

	printf("\n -- Elementos da Fila -- \n");
	for (int i = 0; i < queue->size; i++)
	{
		int index = (queue->front + i) % ARR;
		printf("%d \t", queue->items[index]);
	}

	printf("\n");
}