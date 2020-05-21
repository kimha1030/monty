#include "monty.h"

/**
 * add - Function that prints the sum at the top of the stack
 * @stack: Variable of the struct
 * @line_number: Number of line
 * Return: void
 **/

void add(stack_t **stack, unsigned int line_number)
{
	int position = 0;

	add_top(stack, position, line_number);
}
