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
	int i;
	instruction_t opst[] = {
		{"push", push},
		{"pall", pall},
		{"pallp", pallp},
		{"pint", pint},
		{"pop", pop},
		{"swap", swap},
		{"add", add},
		{"nop", nop},
		{"sub", sub},
		{NULL, NULL}};

	i = 0;
	op = strtok(line, " \n\t");
	arg = strtok(NULL, " \n\t");

	if (op && op[0] != '#')
	{
		while (opst[i].opcode != NULL)
		{
			if (strcmp(op, opst[i].opcode) == 0)
			{
				opst[i].f(stack, arg, line_number);
				break;
			}
			i++;
		}
		if (opst[i].opcode == NULL)
		{
			fprintf(stderr, "L%d: unknown instruction %s\n", line_number, op);
			exit(EXIT_FAILURE);
		}
	}
}
