#include "monty.h"

/**
 * frees_stack - free the memory
 * @stack: list for the structure
 * Return: void
 */

void frees_stack(stack_t *stack)
{
	stack_t *fr;

	if (!stack)
		return;
	if (stack->prev)
	{
		while (stack->prev)
			stack = stack->prev;
	}
	fr = stack->next;
	while (stack)
	{
		free(stack);
		if (!fr)
			return;
		stack = fr;
		fr = fr->next;
	}
}
