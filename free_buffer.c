#include "monty.h"

/**
 * free_buffer - Free the buffer of getline
 * @input: double pointer
 * Return: void
 **/

void free_buffer(char **input)
{
	if (input[0])
	{
		free(input[0]);
		input[0] = NULL;
	}
}
