#include "monty.h"

/**
 * sub - Function that substracts the top element of stack of second
 * @stack: Varaible of struc
 * @line_number: Number of line
 * Return: void
 **/

void sub(stack_t **stack, unsigned int line_number)
{
	int position = 0;

	sub_top(stack, position, line_number);
}
