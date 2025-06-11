#include <stdio.h>
#include "queue.h"

void init(Queue* q)
{
    q->front_index = -1;
    q->back_index = -1;
}

void EnQueue(Queue* q, int value)
{
    if (isFull(q))
    {
        printf("Queue is full\n");
        return;
    }

    if (q->front_index == -1)
    {
        q->front_index = 0;
    }

    q->back_index++;
    q->arr[q->back_index] = value;
}

void DeQueue(Queue* q)
{
    if (isEmpty(q))
    {
        printf("Queue is empty\n");
        return;
    }

    q->front_index++;

    if (q->front_index > q->back_index)
    {
        init(q); 
    }
}

int top(Queue* q)
{
    if (isEmpty(q))
    {
        return -1;
    }

    return q->arr[q->front_index];
}

int isFull(Queue* q)
{
    if (q->back_index == MAX_SIZE - 1)
    {
        return 1;
    }

    return 0;
}

int isEmpty(Queue* q)
{
    if (q->front_index == -1 || q->front_index > q->back_index)
    {
        return 1;
    }

    return 0;
}

void printQueue(Queue* q)
{
    if (isEmpty(q))
    {
        printf("Queue is empty\n");
        return;
    }

    int i = q->front_index;
    while (i <= q->back_index)
    {
        printf("%d ", q->arr[i]);
        i++;
    }
    printf("\n");
}
