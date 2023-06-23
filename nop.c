#include <stdio.h>

#define MAX_SIZE 100

typedef struct
{
    int elements[MAX_SIZE];
    int top;
} Stack;
void nop(stack_t **stack, unsigned int line_number)
{

}

int main()
{
    stack_t *stack = NULL;
    unsigned int line_number = 1;

    nop(&stack, line_number);  

    return 0;
}
