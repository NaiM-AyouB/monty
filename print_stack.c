#include "monty.h"

/**
 * print_stack - print all the elements of a stack
 * @stack: pointer to the start of the stack
 *
 * Return: number of nodes
 */
size_t print_stack(const stack_t *stack)
{
	size_t i;

	for (i = 0; stack != NULL; i++)
	{
		printf("%d\n", stack->n);
		stack = stack->next;
	}
	return (i);
}

/**
 * print_stack_pretty - print all the elements of a stack
 * @stack: pointer to the start of the stack
 *
 * Return: number of nodes
 */
size_t print_stack_pretty(const stack_t *stack)
{
	size_t i;

	for (i = 0; stack != NULL; i++)
	{
		if (stack->n)
			printf("node: %d", stack->n);
		else
			printf("node:  ");

		if (stack->prev)
			printf(", prev: %d", stack->prev->n);
		else
			printf(", prev:  ");

		if (stack->next)
			printf(", next: %d", stack->next->n);
		else
			printf(", next:  ");

		printf("\n");
		stack = stack->next;
	}
	return (i);
}
