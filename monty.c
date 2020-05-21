#include "monty.h"
int number;
/**
 * main - Monty interpreter
 * @argc: argument count
 * @argv: argument vector
 * Return: EXICCESS or EXIT_FAILURE
 **/
int main(int argc, char *argv[])
{
	stack_t *h = NULL;
	char *buffer = NULL, *toka = NULL, *tokb = NULL, *let = "push";
	size_t lenght = 0;
	unsigned int count_line = 1;
	FILE *f;
	int cf;

	f = open_file(argc, argv);
	while (getline(&buffer, &lenght, f) != EOF)
	{
		toka = strtok(buffer, " \n\t");
		if (strcmp(toka, let) == 0)
		{
			tokb = strtok(NULL, " \n\t");
			if (fun_isdigit((tokb)) == 0)
				number = atoi(tokb);
			else
			{
				fprintf(stderr, "L%u: usage: push integer\n", count_line);
				exit(EXIT_FAILURE);
			}
		}
		printf("%u", count_line);
		cf = call_fun(count_line, toka, &h);
		if (cf == 1)
		{
			fprintf(stderr, "L%u: unknown instruction %s\n", count_line, toka);
			exit(EXIT_FAILURE);
		}
		count_line++;
	}
	free_stack(h);
	free_buffer(&buffer);
	fclose(f);
	return (EXIT_SUCCESS);
}
