#include "monty.h"

/**
 * print_dlistint - prints all the elements of a dlist_t listint.
 * @h: pointer to head
 * Return: i
 */

void print_dlistint(stack_t **h)
{
	int i = 0;
	stack_t *tmp = *h;

	for (i = 0; tmp != NULL; i++)
	{
		printf("%i\n", tmp->n);
		tmp = tmp->next;
	}
}
