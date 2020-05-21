#include "monty.h"

/**
 * mul - Function that calculates the product of top and second elements
 * @stack: Varaible of struc
 * @line_number: Number of line
 * Return: void
 **/

void mul(stack_t **stack, unsigned int line_number)
{
	int position = 0;

	mul_top(stack, position, line_number);
}
