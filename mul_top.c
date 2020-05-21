#include "monty.h"

/**
 * mul_top - Function that calculates the product between two numbers
 * @h: Variable of the struct
 * @position: always 0
 * @line_number: Number of line
 * Return: void
 **/

stack_t *mul_top(stack_t **h, unsigned int position, unsigned int line_number)
{
	int minimun = 2, lenght;
	stack_t *mult = NULL;

	lenght = dlistint_len(*h);
	if (lenght < minimun)
	{
		fprintf(stderr, "L%u: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	if (*h == NULL)
	{
		fprintf(stderr, "L%u: division by zero\n", line_number);
		exit(EXIT_FAILURE);
	}
	else
	{
		mult = (*h);
		mult = (*h)->next;
		mult->n = mult->n * (*h)->n;
		pop_nodes(h, position, line_number);
	}
	return (mult);
}
