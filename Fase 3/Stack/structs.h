#ifndef STRUCTS_H
#define STRUCTS_H

typedef struct
{
    int top;
    char names[MAX_ARRAY][50];
} Stack;

extern Stack stack;

void start(Stack *stack);
void push(Stack *stack, char name[]);
void pop(Stack *stack);
void show(Stack *stack);
#endif