#include "monty.h"

/**
 * free_stack - This function allows to free the memory
 * @stack: name of structure
 * Return: void
 **/

void free_stack(stack_t *stack)
{
	if (stack == NULL)
	{
		return;
	{
	if ((stack)->next != NULL)
	{
		free_stack(stack->next);
	}
	free(stack);
}
