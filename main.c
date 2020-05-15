#include "monty.h"

/**
 * main - Monty interpreter
 * @argc: the number of the chars
 * @argv: the char
 * Return: Always EXIT_SUCCES
 */

int main(int argc, char *argv[])
{
	stack_t **top = NULL;
	FILE *file;
	char *buffer = NULL, *tok_a = NULL, *tok_b = NULL;
	size_t lenght = 0;
	ssize_t get_lines;
	int i, number
	int count_line = 1;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s <file>\n", argv[0]);
		exit(EXIT_FAILURE);
	}
	file = fopen(argv[1], "r");
	if (file == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while ((get_lines = getline(&buffer, &lenght, file)) != EOF)
	{
		i = strlen(buffer);
		buffer[i - 1] = '\0';
		tok_a = strtok(buffer, " \n\t");
		if (strcmp(tok_a, "push") == 0)
		{
			tok_b = strtok(NULL, " \n\t");
			if(_isdigit(tok_b) == 0)
				number = atoi(tok_b);
			count_line++;
		}
		if (tok_a != 0)
		{
			call_fun(count_line, tok_a, &top);
		}
	}
	free_line(&buffer);
	free_stack_t(top);
	fclose(file);
	return (EXIT_SUCCESS);
}
