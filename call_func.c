#include "monty.h"
/**
 * call_fun - Compare the funtion with structure
 * @count_line: Number of the line
 * @toka: first word of line of th file
 * @h: head of the struct
 * Return: void
 **/
int call_fun(unsigned int count_line, char *toka, stack_t **h)
{
	instruction_t options[] = {
		{"push", push},
		{"pall", pall},
		{"pint", pint},
		{"swap", swap},
		{"add", add},
		{"pop", pop},
		{"sub", sub},
		{"div", f_div},
		{"mul", mul},
		{"nop", nop},
		{"mod", mod},
		{NULL, NULL},
	};
	unsigned int i;

	for (i = 0; options[i].opcode != NULL; i++)
	{
		if (strcmp(options[i].opcode, toka) == 0)
		{
			options[i].f(h, count_line);
			return (0);
		}
	}
	return (1);
}
