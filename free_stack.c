#include "monty.h"
#include <stdlib.h>

/**
 * free_stack - free a stack
 * @head: pointer to the beginning of the stack
 *
 * Return: void
 */
void free_stack(stack_t *head)
{
	stack_t *next;

	while (head != NULL)
	{
		next = head->next;
		free(head);
		head = next;
	}
}
