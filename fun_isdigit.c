#include "monty.h"

/**
 * fun_isdigit - Function that shows if character is a number
 * @c: character
 * Return: Always 0 (Success)
 **/

int fun_isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
