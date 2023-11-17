#include "../monty.h"
#include "../print_stack.c"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	stack_t *head;
	stack_t *new;
	stack_t hello = {8, NULL, NULL};
	size_t n;

	head = &hello;
	new = malloc(sizeof(stack_t));
	if (new == NULL)
	{
		dprintf(2, "Error: Can't malloc\n");
		return (EXIT_FAILURE);
	}
	new->n = 9;
	head->prev = new;
	new->next = head;
	new->prev = NULL;
	head = new;
	n = print_stack(head);
	printf("-> %lu elements\n", n);
	free(new);
	return (EXIT_SUCCESS);
}
