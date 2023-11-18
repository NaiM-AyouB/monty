#include "monty.h"

/**
 * data_store_t data = {NULL, NULL};
 */

/**
 * main - monty code interpreter
 * @argc: number of arguments
 * @argv: monty file location
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	stack_t *stack;
	FILE *file;
	char *line;
	ssize_t read_line_return = 1;
	size_t size = 0;
	unsigned int line_number;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	file = fopen(argv[1], "r");
	if (!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	stack = NULL;
	line_number = 0;
	while (read_line_return > 0)
	{
		line = NULL;
		read_line_return = getline(&line, &size, file);
		line_number++;
		if (read_line_return > 0)
			execute(line, &stack, line_number);
		free(line);
	}
	return (0);
}
