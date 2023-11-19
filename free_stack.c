#include "monty.h"

/**
 * free_stack - free a stack
 * @stack: pointer to the beginning of the stack
 *
 * Return: void
 */
void free_stack(stack_t *stack)
{
	stack_t *next;

	while (stack != NULL)
	{
		next = stack->next;
		free(stack);
		stack = next;
	}
}
