#include "monty.h"

/**
 * print_dlistint - prints all the elements of a dlist_t listint.
 * @h: pointer to head
 * Return: i
 */

void print_dlistint(stack_t **h)
{
	int i = 0;
	stack_t *aux = *h;

	for (i = 0; aux != NULL; i++)
	{
		printf("%i\n", aux->n);
		aux = aux->next;
	}
}
