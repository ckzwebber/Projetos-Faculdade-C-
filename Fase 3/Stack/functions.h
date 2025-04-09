#include "structs.h"

void start(Stack *stack)
{
    stack->top = -1;
}

void push(Stack *stack, char name[])
{
    if (stack->top == MAX_ARRAY - 1)
    {
        printf("Pilha cheia\n");
        return;
    }
    stack->top++;
    strcpy(stack->names[stack->top], name); // ver se é ponto ou virgula
    printf("Nome %s empilhado\n", name);
}

void pop(Stack *stack)
{
    if (stack->top == -1)
    {
        printf("Pilha vazia\n");
        return;
    }
    printf("Nome %s desempilhado\n", stack->names[stack->top]);
    stack->top--;
}

void show(Stack *stack)
{
    if (stack->top == -1)
    {
        printf("Pilha vazia\n");
        return;
    }
    printf("Nomes empilhados\n");
    for (int i = stack->top; i >= 0; i--)
    {
        printf("%s\n", stack->names[i]);
    }
}
