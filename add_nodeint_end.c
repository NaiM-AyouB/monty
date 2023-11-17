#include "monty.h"

/**
 * add_node_end - adds a node to the end of a stack
 * @head: double pointer to the beginning of the stack
 * @n: value to add to new node
 *
 * Return: pointer to the new node, or NULL on failure
 */
stack_t *add_node_end(stack_t **head, const int n)
{
	stack_t *new, *tmp;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(stack_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}
	tmp = *head;
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = new;
	new->prev = tmp;
	return (new);
}
