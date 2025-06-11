#ifndef LINKEDLIST_H
#define LINKEDLIST_H

typedef struct LinkedList
{
    int value;
    struct LinkedList* Head;
    struct LinkedList* next;
    struct LinkedList* prev;  // Doubly linked list
} LinkedList;

void init(LinkedList* node);
void add(LinkedList* node, int value);
void pop(LinkedList* node);
int is_empty(LinkedList* node);
void print_list(LinkedList* node);
void reverse(LinkedList* node);

#endif
