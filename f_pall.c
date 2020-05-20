#include "monty.h"

/**
 * pall - Function that print the list
 * @stack: Variable of the structure
 * @line_number: Number of the line
 * Return: Always EXIT_SUCCES
 **/

void pall(stack_t **stack, unsigned int line_number)
{
	(void)line_number;
	print_dlistint(stack);
}
