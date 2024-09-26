#include "monty.h"

/**
  * filecheck - check if the required arguments are provided
  * @argc: argument count
  * @argv: argument vector
  */

void filecheck(int argc, char **argv)
{
	(void) argv;
	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	if (argv[1] == NULL)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
}

/**
  * read_file - a function that reads the content of a file
  * @filename: the file
  */

void read_file(char *filename)
{
	char *buffer = NULL;
	size_t size = 0;
	int response = 0;

	FILE *fd = fopen(filename, "r");

	if (fd == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", filename);
		exit(EXIT_FAILURE);
	}
	while ((response = getline(&buffer, &size, fd) != -1))
	{
		parser(buffer);
	}
	if (response == -1 && !feof(fd))
	{
		fprintf(stderr, "Error: Can't read file %s\n", filename);

	}
	free(buffer);
	fclose(fd);
}

/**
 * parser - Tokenizes the input string into characters.
 * @buffer: The input strings to be tokenized.
 */

void parser(char *buffer)
{
	char *token;
	char *delim = " \n\t";
	char *opcode = NULL;
	int number = 0;

	token = strtok(buffer, delim);
	while (token)
	{
		opcode = strtok(buffer, delim);
		if (opcode != NULL)
		{
			number = atoi(strtok(NULL, delim));
			if (strcmp(opcode, "push") == 0)
			{
				push_to_stack(number);
			}
		}
	}
}
