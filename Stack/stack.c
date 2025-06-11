#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

void init(Stack* st)
{
    st->top_index = -1;
}

void push(Stack* st, int value)
{
    if(isFull(st) == 1)
    {
        printf("Stack is full\n");
        return;
    }
    st->arr[++st->top_index] = value;
}

void pop(Stack* st)
{
    if(isEmpty(st) == 1)
    {
        printf("Stack is Empty\n");
        return;
    }
    st->arr[st->top_index] = 0;
    --st->top_index;
}

int top(Stack* st)
{
    if(isEmpty(st))
        return -1;
    return st->arr[st->top_index];
}

int isFull(Stack* st)
{
    if(st->top_index == MAX_SIZE - 1)
        return 1;
    return 0;
}

int isEmpty(Stack* st)
{
    if (st->top_index == -1)
        return 1;
    return 0;
}

void printStack(Stack* st)
{
    if(isEmpty(st) == 1)
        return;
    
    for (int i = 0; i <= st->top_index; i++)
    {
        printf("%d ", st->arr[i]);
    }
    printf("\n");
}