#include "monty.h"

/**
 * frees_buffer - Free the buffer
 * @input: pointer to free.
 * Return: void
 **/

void frees_buffer(char **input)
{
	if (input[0])
	{
		free(input[0]);
		input[0] = NULL;
	}
}
