#include "stack.h"
#include <stdio.h>

int main()
{
    Stack st;
    init(&st);

    push(&st, 1);
    push(&st, 2);
    push(&st, 3);
    push(&st, 4);
    printStack(&st);

    pop(&st);
    printStack(&st);

    int v = top(&st);
    printf("%d \n", v);

    pop(&st);
    printStack(&st);

    int w = top(&st);
    printf("%d \n", w);

    pop(&st);
    pop(&st);

    int x = top(&st);
    printf("%d \n", x);

    return 0;
}