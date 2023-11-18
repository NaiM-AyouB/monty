#include "monty.h"

/**
 * execute - function that executes the opcode
 * @line: line
 * @stack: stack
 * @line_number: line number
 * Return: nothing
 */
void execute(char *line, stack_t **stack, unsigned int line_number)
{
	char *op;
	char *arg;
	int number;

	op = strtok(line, " \n\t");
	if (op != NULL)
	{
		arg = strtok(NULL, " \n\t");
		if (strcmp(op, "push") == 0)
		{
			if (arg == NULL)
				fprintf(stderr, "L%d: usage: push integer\n", line_number);
			else
			{
				number = atoi(arg);
				if (add_node(stack, number) == NULL)
					fprintf(stderr, "err at add_node\n");
			}
		}
		else if (strcmp(op, "pall") == 0)
			print_stack(*stack);
		else
		{
			fprintf(stderr, "L%d: unknown instruction %s\n", line_number, op);
			exit(EXIT_FAILURE);
		}
	}
}
