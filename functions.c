#include "monty.h"

/**
 * execute - function that executes the opcode
 * @line: line
 * @stack: stack
 * Return: nothing
 */
void execute(char *line, stack_t **stack)
{
	printf("%s", line);
	(void)*stack;
}
