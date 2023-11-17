#include "monty.h"

/**
 * stack_len - count the number of nodes in the stack
 * @h: pointer to the beginning of a stack
 *
 * Return: number of nodes
 */
size_t stack_len(const stack_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
		h = h->next;
	return (i);
}
