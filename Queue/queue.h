#ifndef QUEUE_H
#define QUEUE_H

#define MAX_SIZE 100

typedef struct
{
    int arr[MAX_SIZE];
    int front_index;
    int back_index;
} Queue;

void init(Queue* q);
void EnQueue(Queue* q, int value);
void DeQueue(Queue* q);
int top(Queue* q);
int isFull(Queue* q);
int isEmpty(Queue* q);
void printQueue(Queue* q);

#endif
