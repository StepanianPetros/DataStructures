#include <stdlib.h>
#include <stdio.h>
#include "LinkedList.h"

void init(LinkedList* node)
{
    node->Head = NULL;
    node->next = NULL;
    node->prev = NULL;
    node->value = 0;
}

int is_empty(LinkedList* node)
{
    if (node->Head == NULL)
        return 0;
    return 1;
}

void add(LinkedList* node, int value)
{
    LinkedList* n = (LinkedList*)malloc(sizeof(LinkedList));
    n->value = value;
    n->next = NULL;
    n->prev = NULL;

    if (is_empty(node) == 0)
    {
        node->Head = n;
    }
    else
    {
        LinkedList* temp = node->Head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = n;
        n->prev = temp;
    }
}

void pop(LinkedList* node)
{
    if (is_empty(node) == 0)
        return;

    LinkedList* temp = node->Head;

    if (temp->next == NULL)
    {
        free(temp);
        node->Head = NULL;
        return;
    }

    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->prev->next = NULL;
    free(temp);
}

void reverse(LinkedList* node)
{
    LinkedList* temp = node->Head;
    LinkedList* prev = NULL;

    while (temp != NULL)
    {
        LinkedList* next = temp->next;
        temp->next = temp->prev;
        temp->prev = next;
        prev = temp;
        temp = next;
    }

    node->Head = prev;
}


void print_list(LinkedList* node)
{
    LinkedList* temp = node->Head;
    while (temp != NULL)
    {
        printf("%d ", temp->value);
        temp = temp->next;
    }
    printf("\n");
}
