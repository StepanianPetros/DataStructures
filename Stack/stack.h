#define MAX_SIZE 100

typedef struct _Stack
{
    int arr[MAX_SIZE];
    int top_index;
} Stack;

void init(Stack* stack);
void push(Stack* stack, int value);
void pop(Stack* stack);
int top(Stack* stack);
int isFull(Stack* stack);
int isEmpty(Stack* stack);
void printStack(Stack* stack);
