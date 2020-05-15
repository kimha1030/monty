#include "monty.h"

/**
 * add_node - add the nodes of the stack_t
 * @head: head of the lists
 * @n: number (data) to add
 * Return: pointer
 **/

stack_t *add_node(stack_t **head, const int n)
{
	stack_t *new;

	if (head == 0)
		return (0);
	new =  malloc(sizeof(stack_t));
	if (new == 0)
		return (0);
	new->n = n;
	new->next = 0;
	new->prev = 0;
	if (*head == 0)
		*head = new;
	else
	{
		(*head)->prev = new;
		new->next = *head;
		*head = new;
	}
	return (*head);
}
