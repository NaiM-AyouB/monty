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
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}
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
	(void)*arg;
	(void)line_number;
	print_stack(*stack);
}

/**
 * pallp - function that prints everything in the stack but pretty
 * @stack: double stack pointer to the stack
 * @arg: arg
 * @line_number: line number
 *
 * Return: nothing
 */
void pallp(stack_t **stack, char *arg, unsigned int line_number)
{
	(void)*arg;
	(void)line_number;
	print_stack_pretty(*stack);
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
	(void)*arg;
	if (stack == NULL || *stack == NULL)
	{
		printf("L%d: can't pint, stack empty\n", line_number);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}
	else
		printf("%d\n", (*stack)->n);
}

/**
 * pop - function that removes the top element of the stack
 * @stack: double stack pointer to the stack
 * @arg: arg
 * @line_number: line number
 *
 * Return: nothing
 */
void pop(stack_t **stack, char *arg, unsigned int line_number)
{
	(void)*arg;
	if (stack == NULL || *stack == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}
	*stack = (*stack)->next;
	if (*stack != NULL)
	{
		free((*stack)->prev);
		(*stack)->prev = NULL;
	}
}
