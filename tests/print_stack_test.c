#include "../monty.h"
#include "../print_stack.c"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	stack_t *node1;
	stack_t *node2;
	stack_t *node3;
	stack_t *node4;
	size_t n;

	node1 = malloc(sizeof(stack_t));
	node2 = malloc(sizeof(stack_t));
	node3 = malloc(sizeof(stack_t));
	node4 = malloc(sizeof(stack_t));
	if (node1 == NULL || node2 == NULL || node3 == NULL || node4 == NULL)
	{
		dprintf(2, "Error: Can't malloc\n");
		return (EXIT_FAILURE);
	}

	node1->n = 1;
	node1->prev = NULL;
	node1->next = node2;

	node2->n = 2;
	node2->prev = node1;
	node2->next = node3;

	node3->n = 4;
	node3->prev = node2;
	node3->next = node4;

	node4->n = 8;
	node4->prev = node3;
	node4->next = NULL;

	n = print_stack(node1);
	printf("-> %lu elements\n", n);
	return (EXIT_SUCCESS);
}
