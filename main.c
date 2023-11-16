#include "monty.h"

data_store_t data = {NULL, NULL};

/**
 * main - monty code interpreter
 * @argc: number of arguments
 * @argv: monty file location
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	FILE *file;
	char *line;
	ssize_t read_line_return = 1;
	size_t size = 0;
	stack_t *stack;

	(void)*argv;
	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	file = fopen(argv[1], "r");
	data.file = file;
	if (!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	stack = NULL;
	(void)*stack;
	while (read_line_return > 0)
	{
		line = NULL;
		read_line_return = getline(&line, &size, file);
		data.line = line;
		if (read_line_return > 0)
		{
			printf("line: %s", line);
		}
		free(line);
	}
	return (0);
}
