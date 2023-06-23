#include <stdio.h>
#include <stdlib.h>

#define STACK_SIZE 1024

typedef struct {
    int stack[STACK_SIZE];
    int top;
} Stack;

Stack stack;

void push(int value)
{
    if (stack.top == STACK_SIZE)
    {
        printf("Stack overflow\n");
        exit(EXIT_FAILURE);
    }
    stack.stack[stack.top++] = value;
}

int pop()
{
    if (stack.top == 0)
    {
        printf(" can't pop, stack is empty\n");
        exit(EXIT_FAILURE);
    }
    return stack.stack[--stack.top];
}

void add()
{
    if (stack.top < 2)
    {
        printf("can't add, stack too short\n");
        exit(EXIT_FAILURE);
    }
    int x = pop();
    int y = pop();
    push(x + y);
}

int main()
{
    stack.top = 0;
    push(1);
    push(2);
    push(3);
    printf("%d\n", pop());
    add();
    printf("%d\n", pop());

    return 0;
}
