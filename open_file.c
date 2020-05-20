#include "monty.h"

/**
 * open_file - Function for open a file, if there is enough arguments
 * @argc: argument count
 * @argv: argument vector
 * Return: f
 **/

FILE *open_file(int argc, char *argv[])
{
	FILE *f;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s <file>\n", argv[0]);
		exit(EXIT_FAILURE);
	}
	f = (fopen(argv[1], "r"));
	if (f == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	return (f);
}
