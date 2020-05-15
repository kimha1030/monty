#include "monty.h"
/**
 *pall - print to list
 *@stack: this is variable of the struct
 *@line_number: number of the line
 * Return: Always EXIT_SUCCES
 */
void pall(stack_t **stack, unsigned int line_number)
{
	print_dlistint(*stack);
}
