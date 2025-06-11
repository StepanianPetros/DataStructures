#include <stdio.h>
#include "LinkedList.h"

int main()
{
    LinkedList head;
    init(&head);

    add(&head, 1);
    add(&head, 2);
    add(&head, 3);

    print_list(&head);

    pop(&head);

    print_list(&head);

    reverse(&head);

    print_list(&head);
    
    return 0;
}
