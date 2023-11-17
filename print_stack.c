#include "monty.h"
#include <stdio.h>

/**
 * print_stack - print all the elements of a stack
 * @h: pointer to the start of the stack
 *
 * Return: number of nodes
 */
size_t print_stack(const stack_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
