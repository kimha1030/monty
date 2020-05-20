#include "monty.h"

/**
 * pint - Function that prints the value at the top of the stack
 * @stack: Variable of the struct
 * @line_number: Number of line
 * Return: void
 **/

void pint(stack_t **stack, unsigned int line_number)
{
	pint_top(stack, line_number);
}
