#include "monty.h"

/**
 * f_mod - Function that calculates the module of top and second elements
 * @stack: Varaible of struc
 * @line_number: Number of line
 * Return: void
 **/

void mod(stack_t **stack, unsigned int line_number)
{
	int position = 0;

	mod_top(stack, position, line_number);
}
