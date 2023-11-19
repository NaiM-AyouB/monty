#include "monty.h"

/**
 * swap - function that swaps the top two elements of the stack
 * @stack: double stack pointer to the stack
 * @arg: arg
 * @line_number: line number
 *
 * Return: nothing
 */
void swap(stack_t **stack, char *arg, unsigned int line_number)
{
	stack_t *one;
	stack_t *two;

	(void)*arg;
	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	one = *stack;
	two = one->next;

	one->prev = two;
	one->next = two->next;

	two->prev = NULL;
	two->next = one;

	*stack = two;
	if (one->next)
		one->next->prev = one;
}

/**
 * add - function that adds the top two elements of the stack
 * @stack: double stack pointer to the stack
 * @arg: arg
 * @line_number: line number
 *
 * Return: nothing
 */
void add(stack_t **stack, char *arg, unsigned int line_number)
{
	stack_t *next;

	(void)*arg;
	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	next = (*stack)->next;
	next->n = next->n + (*stack)->n;
	*stack = next;
	free(next->prev);
	next->prev = NULL;
}

/**
 * nop - function that doesn’t do anything
 * @stack: double stack pointer to the stack
 * @arg: arg
 * @line_number: line number
 *
 * Return: nothing
 */
void nop(stack_t **stack, char *arg, unsigned int line_number)
{
	(void)*stack;
	(void)*arg;
	(void)line_number;
}
