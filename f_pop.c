#include "monty.h"

/**
 * pop - Function that delete the elemnt 0 on the lists
 * @stack: this is variable of the struct
 * @line_number: number of the line
 * Return: void
 */

void pop(stack_t **stack, unsigned int line_number)
{
	int value = 0;

	pop_nodes(stack, value, line_number);
}
