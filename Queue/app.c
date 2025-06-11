#include <stdio.h>
#include "queue.h"

int main()
{
    Queue q;
    init(&q);

    EnQueue(&q, 1);
    EnQueue(&q, 2);
    EnQueue(&q, 3);
    EnQueue(&q, 4);

    printQueue(&q);

    DeQueue(&q);
    printQueue(&q);

    int v = top(&q);
    printf("Top: %d\n", v);

    DeQueue(&q);
    printQueue(&q);

    int w = top(&q);
    printf("Top: %d\n", w);

    DeQueue(&q);
    DeQueue(&q);
    printQueue(&q);

    int x = top(&q);
    printf("Top: %d\n", x);

    return 0;
}
