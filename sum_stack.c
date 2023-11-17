#include "monty.h"

/**
 * sum_stack - sums all of the data of a stack
 * @head: pointer to the beginning of the stack
 *
 * Return: sum of all data, or 0 if the list is empty
 */
int sum_stack(stack_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
