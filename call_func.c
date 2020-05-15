#include "monty.h"

/**
 *check_fun - check of the funtion
 *@lineNumber: the number oo the line
 *@str1: string of the compairs elemntes
 *@heade: this is variable of the struct
 * Return: Always EXIT_SUCCES
 */
void check_fun(unsigned int lineNumber, char *str1, stack_t **heade)
{
	int i;

	instruction_t fun[] = {
		{"push", push},
		{"pall", pall},
		{NULL, NULL},
	};

	for (i = 0; fun[i].opcode != NULL; i++)
	{
		if (strcmp(fun[i].opcode, str1) == 0)
		{
			fun[i].f(heade, lineNumber);
			break;
		}
	}
	/*dprintf(STDERR_FILENO, "L %u: unknown instruction <opcode>\n", lineNumber);*/
}
