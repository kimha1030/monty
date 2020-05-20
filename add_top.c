#include "monty.h"

/**
 * add_top - Function that get the sum of top of the stack
 * @h: Variable of the struct
 * @line_number: Number of line
 * Return: void
 **/

stack_t *add_top(stack_t **h, unsigned int line_number)
{
	int minimun = 2, lenght;
	stack_t *sum = NULL;
	unsigned int index = 0;

	lenght = dlistint_len(*h);
	if (lenght < minimun)
	{
		fprintf(stderr, "L%u: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	if (*h != NULL)
	{
		sum = (*h);
		sum = (*h)->next;
		sum->n = sum->n + (*h)->n;
		pop_nodes(h, index, line_number);
	}
	return (sum);
}
