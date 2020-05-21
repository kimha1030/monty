#include "monty.h"

/**
 * f_div - Function that divides the top element of stack between second
 * @stack: Varaible of struc
 * @line_number: Number of line
 * Return: void
 **/

void f_div(stack_t **stack, unsigned int line_number)
{
	int position = 0;

	div_top(stack, position, line_number);
}
