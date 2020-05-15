#include "monty.h"

/**
 * frees_data - free the memory
 * @arguments: the list for the structure
 * Return: void
 **/

void frees_data(char **arguments)
{
	int i = 0;

	if (!arguments)
		return;
	while (arguments[i])
	{
		free(arguments[i]);
		arguments[i++] = NULL;
	}
	free(arguments);
	arguments = NULL;
}
