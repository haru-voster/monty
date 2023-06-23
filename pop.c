#include <stdio.h>
#include <stdlib.h>

#define STACK_SIZE 100

int stack[STACK_SIZE];
int top = -1;

void push(int value)
{
    if (top == STACK_SIZE - 1)
    {
        printf("Stack overflow!\n");
        exit(EXIT_FAILURE);
    }
    stack[++top] = value;
}

int pop()
{
    if (top == -1)
    {
        printf("Stack underflow!\n");
        exit(EXIT_FAILURE);
    }
    return stack[top--];
}

int main()
{
    // Example usage
    push(10);
    push(20);
    push(30);

    int poppedValue = pop();
    printf("Popped value: %d\n", poppedValue);

    return 0;
}
