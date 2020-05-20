#include "monty.h"

/**
 * dlistint_len - prints number elements of a dlist_t listint.
 * @h: pointer to head
 * Return: i
 */
size_t dlistint_len(stack_t *h)
{
	int i;
	stack_t *aux = h;

	for (i = 0; aux != NULL; i++)
		aux = aux->next;
	return (i);
}
