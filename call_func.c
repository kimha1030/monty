#include "monty.h"

/**
 * call_fun - Compare the funtion with structure
 * @count_line: Number of the line
 * @tok_a: first word of line of th file
 * @heade: variable of the struct
 * Return: EXIT_SUCCES
 **/

void call_fun(unsigned int count_line, char *tok_a, stack_t **heade)
{
	int i;

	instruction_t options[] = {
		{"push", push},
		{"pall", pall},
		{NULL, NULL},
	};

	for (i = 0; options[i].opcode != NULL; i++)
	{
		if (strcmp(options[i].opcode, tok_a) == 0)
		{
			options[i].f(heade, count_line);
			break;
		}
	}
}
