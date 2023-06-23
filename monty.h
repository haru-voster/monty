#ifndef _MONTY_H_
#define _MONTY_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
extern int n;
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

void error_arguments(void);
void open_error(char **);
void invalidInstruction_error(char *invInstruction, unsigned int line);
void not_int_err(unsigned int line);
void malloc_error(void);

void pint(unsigned int line);
void pop(unsigned int line);
void swap(unsigned int line);
void add(unsigned int line);
void sub(unsigned int line);

void div(unsigned int line);
void div(unsigned int line);
void mul(unsigned int line);
void mod(unsigned int line);
/*error handler4*/
void pchar_error(unsigned int line);
void pchar_error2(unsigned int line);

/* executer functions*/
void open_and_read(char **argv);
int is_number(char *token);
int is_comment(char *token, int line_counter);

void (*get_op_code(char *token, unsigned int line)) (stack_t **, unsigned int);
void push_stack(stack_t **top, unsigned int line_number);
void pall_stack(stack_t **top, unsigned int line_number);
void free_stack(stack_t *top);
void pint_stack(stack_t **top, unsigned int line_number);
void pop_stack(stack_t **top, unsigned int line_number);
void _swap(stack_t **top, unsigned int line);
void _add(stack_t **top, unsigned int line);
void _sub(stack_t **top, unsigned int line_number);
void _div(stack_t **top, unsigned int line_number);
void _mul(stack_t **top, unsigned int line);

void _mod(stack_t **top, unsigned int line_number);
void rotl_stack(stack_t **top, unsigned int line_number);
void rotr_stack(stack_t **top, unsigned int line_number);
void _nop(stack_t **top, unsigned int line);
void _pchar(stack_t **top, unsigned int line_number);
void pstr_stack(stack_t **top, unsigned int line_number);

#endif /* _MONTY_H_ */
