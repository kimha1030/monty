#include "monty.h"
/**
 * pop_nodes - Function that allows delete a node
 * @h: Head of linked list
 * @position: Position of element
 * @line_number: Number of line
 * Return: int
 */
int pop_nodes(stack_t **h, unsigned int position, unsigned int line_number)
{
	stack_t *aux = *h;
	unsigned int i = 0;

	if (*h == 0)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}
	if ((*h)->next == 0 && position == 0)
	{
		return (-1);
	}
	if (position > (dlistint_len(*h) - 1))
		return (-1);
	if (position == 0)
	{
		*h = aux->next;
		free(aux);
		return (1);
	}
	for (i = 0; i != position; aux = aux->next)
	if (position == (dlistint_len(*h) - 1))
	{
		aux->prev->next = 0;
		free(aux);
		return (1);
	}
	aux->prev->next = aux->next;
	aux->next->prev = aux->prev;
	free(aux);
	free(*h);
	return (1);
}
