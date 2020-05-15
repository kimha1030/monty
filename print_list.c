#include "monty.h"

/**
 * print_list - Function that prints all the elemets of the list
 * @h: pointer to head of the list
 * Return: node
 **/

size_t print_list(const stack_t *h)
{
	unsigned int nodes = 0;

	if (h == 0)
		return (0);
	while (h != 0)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes += 1;
	}
	return (nodes);
}
