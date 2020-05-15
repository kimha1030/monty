#include "monty.h"

/**
 * free_stack_t - free the memory
 * @stack: the lis for the estruct
 */

void free_stack_t(stack_t *stack)
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
