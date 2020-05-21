#include "monty.h"

/**
 * *pint_top - Function that prints the value at the top of the stack
 * @h: double pointer
 * @line_number: Number of line
 * Return: void
 **/

void pint_top(stack_t **h, unsigned int line_number)
{
	if (*h == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%u\n", (*h)->n);
}
