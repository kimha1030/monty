#include "monty.h"

/**
 * sub_top - Function that delete the element of top of the stack of the second
 * @h: Variable of the struct
 * @position: always 0
 * @line_number: Number of line
 * Return: void
 **/

stack_t *sub_top(stack_t **h, unsigned int position, unsigned int line_number)
{
	int minimun = 2, lenght;
	stack_t *subs = NULL;

	lenght = dlistint_len(*h);
	if (lenght < minimun)
	{
		fprintf(stderr, "L%u: can't sub, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	subs = *h;
	if (*h != NULL)
	{
		subs = (*h)->next;
		subs->n = subs->n - (*h)->n;
		pop_nodes(h, position, line_number);
	}
	return (subs);
}
