#include "monty.h"

/**
 * fun_isdigit - Function that shows if character is a number
 * @c: character
 * Return: Always 0 (Success)
 **/

int fun_isdigit(char *c)
{
	int x;

	for (x = 0; c[x] != '\0'; x++)
	{
		if (c[x] >= 48 && c[x] <= 57)
		{
			return (0);
		}
		else
		{
			return (1);
		}
	}
	return (0);
}
