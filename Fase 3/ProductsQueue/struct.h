#ifndef STRUCT_H
#define STRUCT_H
#define ARR 5

typedef struct
{
	int id;
	char name[50];
	float price;
} Product;

typedef struct
{
	Product products[ARR];
	int front;
	int back;
	int size;
} Queue;
#endif