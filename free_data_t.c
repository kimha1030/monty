#include "monty.h"

/**
 * free_data_t- free the memory
 * @arguments: the lis for the estruct
 */

void free_data_t(char **arguments)
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
