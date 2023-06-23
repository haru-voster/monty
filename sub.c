#include"monty.h"
/**
 * pint - print error message if the stack is empty
 * @line: line
 * Return: void
 */
void pint(unsigned int line)
{
	fprintf(stderr, "L%u: can't pint, stack empty\n", line);
	exit(EXIT_FAILURE);
}
/**
 * pop - print error message if the stack is empty
 * @line: line
 * Return: void
 */
void pop(unsigned int line)
{
	fprintf(stderr, "L%u: can't pop an empty stack\n", line);
	exit(EXIT_FAILURE);
}
/**
 * swap - print err msg if stack contains less than two elements
 * @line: line
 * Return: void
 */
void swap(unsigned int line)
{
	fprintf(stderr, "L%u: can't swap, stack too short\n", line);
	exit(EXIT_FAILURE);
}
/**
 * add - Print error if the stack contains less than two elements
 * @line: line
 * Return: void
 */
void add(unsigned int line)
{
	fprintf(stderr, "L%u: can't add, stack too short\n", line);
	exit(EXIT_FAILURE);
}
/**
 * sub - Print error if the stack contains less than two elements
 * @line: line
 * Return: void
 */
void sub(unsigned int line)
{
	fprintf(stderr, "L%u: can't sub, stack too short\n", line);
	exit(EXIT_FAILURE);
}
