#ifndef STRUCT_H
#define STRUCT_H
#define ARR 5

typedef struct
{
	int items[ARR];
	int front;
	int back;
	int size;
} Queue;
#endif