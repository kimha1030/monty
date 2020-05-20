#include "monty.h"

/**
 * *add_dnodeint - adds a new node at the beginning of list.
 * @h: double pointer
 * @n: number
 * Return: new
 **/

stack_t *add_dnodeint(stack_t **h, const int n)
{
	stack_t *new;

	if (h == NULL)
		return (NULL);
	new = malloc(sizeof(stack_t));
	if (new == NULL)
	{
		fprintf(stderr, "Error: malloc failed/n");
		exit(EXIT_FAILURE);
	}
	new->n = n;
	new->next = 0;
	new->prev = 0;
	if (*h == 0)
		*h = new;
	else
	{
		(*h)->prev = new;
		new->next = *h;
		*h = new;
	}
	return (*h);
}
