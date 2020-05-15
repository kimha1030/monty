#include "monty.h"

/**
 * main - main
 *@argc: the number of the chars
 *@argv: the char
 * Return: Always EXIT_SUCCES
 */
int number;

int main(int argc, char *argv[])
{
	stack_t **heade = NULL;
	FILE *stream;
	char *line = NULL, *str1 = NULL, *str2 = NULL;
	size_t len = 0;
	ssize_t nread;
	int x, j;
	int lineNumber = 1;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s <file>\n", argv[0]);
		exit(EXIT_FAILURE);
	}
	stream = fopen(argv[1], "r");
	if (stream == NULL)
	{
		exit(EXIT_FAILURE);
	}
	while (nread = getline(&line, &len, stream) != EOF)
	{
		j = strlen(line);
		line[j - 1] = '\0';
		str1 = strtok(line, " \n\t");
		if (strcmp(str1, "push") == 0)
		{
			str2 = strtok(NULL, " \n\t");
			if(_isdigit(str2) == 0)
				number = atoi(str2);
			lineNumber++;
		}
		if (str1 != 0)
			{
				check_fun(lineNumber, str1, &heade);
			}
	}
	free_line(&line);
	free_stack_t(heade);
	fclose(stream);
	return (EXIT_SUCCESS);
}
