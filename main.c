#include "monty.h"

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
	stack_t *stack = NULL;

	(void)*argv;
	(void)*stack;
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
	while (read_line_return > 0)
	{
		line = NULL;
		read_line_return = getline(&line, &size, file);
		if (read_line_return > 0)
		{
			printf("line: %s", line);
		}
		free(line);
	}
	return (0);
}
