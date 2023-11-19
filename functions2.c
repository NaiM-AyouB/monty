#include "monty.h"

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
