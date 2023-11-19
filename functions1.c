#include "monty.h"

/**
 * push - function that adds node to the stack
 * @stack: double stack pointer to the stack
 * @arg: arg
 * @line_number: line number
 *
 * Return: nothing
 */
void push(stack_t **stack, char *arg, unsigned int line_number)
{
	int number;

	if (arg == NULL)
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
	else
	{
		number = atoi(arg);
		if (add_node(stack, number) == NULL)
			fprintf(stderr, "err at add_node\n");
	}
}

/**
 * pall - function that prints everything in the stack
 * @stack: double stack pointer to the stack
 * @arg: arg
 * @line_number: line number
 *
 * Return: nothing
 */
void pall(stack_t **stack, char *arg, unsigned int line_number)
{
	print_stack(*stack);
	(void)*arg;
	(void)line_number;
}

/**
 * pint - function that prints the top of the stack
 * @stack: double stack pointer to the stack
 * @arg: arg
 * @line_number: line number
 *
 * Return: nothing
 */
void pint(stack_t **stack, char *arg, unsigned int line_number)
{
	if (stack == NULL || *stack == NULL)
		printf("L%d: can't pint, stack empty\n", line_number);
	else
		printf("%d\n", (*stack)->n);
	(void)*arg;
}
