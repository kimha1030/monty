#include "monty.h"

/**
 * free_buffer - Free the buffer
 * @input: pointer to free.
 * Return: void
**/

void free_line(char **input)
{
	if (entrada[0])
	{
		free(input[0]);
		input[0] = NULL;
	}
}
