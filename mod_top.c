#include "monty.h"

/**
 * mod_top - Function that calculates the module
 * @h: Variable of the struct
 * @position: always 0
 * @line_number: Number of line
 * Return: void
 **/

stack_t *mod_top(stack_t **h, unsigned int position, unsigned int line_number)
{
	int minimun = 2, lenght;
	stack_t *mods = NULL;

	lenght = dlistint_len(*h);
	if (lenght < minimun)
	{
		fprintf(stderr, "L%u: can't mod, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	mods = (*h);
	if ((*h)->n == 0 || *h == NULL)
	{
		fprintf(stderr, "L%u: division by zero\n", line_number);
		exit(EXIT_FAILURE);
	}
	else
	{
		mods = (*h)->next;
		mods->n = mods->n % (*h)->n;
		pop_nodes(h, position, line_number);
	}
	return (mods);
}
