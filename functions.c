#include "monty.h"

/**
 * execute - function that executes the opcode
 * @line: line
 * @stack: stack
 * Return: nothing
 */
void execute(char *line, stack_t **stack, unsigned int line_number)
{
	char *op;
	char *arg;

	op = strtok(line, " \n\t");
	arg = strtok(NULL, " \n\t");
	(void)*stack;
	if (strcmp(op, "push") == 0)
	{
		printf("PUSH\n");
		printf("arg: %s\n", arg);
	}
	else if (strcmp(op, "pall") == 0)
	{
		printf("PALL\n");
		printf("arg: %s\n", arg);
	}
	else
	{
		fprintf(stderr, "L%d: unknown instruction %s\n", line_number, op);
		exit(EXIT_FAILURE);
	}
}
