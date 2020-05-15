#include "monty.h"

/**
 * free_line - free a pointer
 * @entrada: pointer to free.
 */

void free_line(char **entrada)
{
	if (entrada[0])
	{
		free(entrada[0]);
		entrada[0] = NULL;
	}
}
