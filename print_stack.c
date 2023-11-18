#include "monty.h"
#include <stdio.h>

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
