#include "monty.h"

/**
 * div_top - Function that divides two elements
 * @h: Variable of the struct
 * @position: always 0
 * @line_number: Number of line
 * Return: void
 **/

stack_t *div_top(stack_t **h, unsigned int position, unsigned int line_number)
{
	int minimun = 2, lenght;
	stack_t *divs = NULL;

	lenght = dlistint_len(*h);
	if (lenght < minimun)
	{
		fprintf(stderr, "L%u: can't div, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	divs = (*h);
	if (*h == 0 || *h == NULL)
	{
		fprintf(stderr, "L%u: division by zero\n", line_number);
		exit(EXIT_FAILURE);
	}
	else
	{
		divs = (*h)->next;
		divs->n = divs->n / (*h)->n;
		pop_nodes(h, position, line_number);
	}
	return (divs);
}
