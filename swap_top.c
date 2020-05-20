#include "monty.h"

/**
 * swap_top - Function that print value at the top of the stack
 * @h: head of linked list
 * @line_number: Number of line
 * Return: void
 **/

stack_t *swap_top(stack_t **h, unsigned int line_number)
{
	int minimun = 2, lenght;
	stack_t *tmp = *h;

	lenght = dlistint_len(*h);
	if (lenght < minimun)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	(*h) = (*h)->next;
	tmp->next = (*h)->next;
	tmp->prev = (*h);
	(*h)->next = tmp;
	(*h)->prev = NULL;
	return (*h);
}
