#include "monty.h"

/**
 * add_dnodeint - add a new node at the beginning of the stack
 * @head: double pointer to the beginning of the stack
 * @n: value to add to the new node
 *
 * Return: pointer to the new node, or NULL on failure
 */
stack_t *add_dnodeint(stack_t **head, const int n)
{
	stack_t *new;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(stack_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = *head;
	*head = new;
	if (new->next != NULL)
		(new->next)->prev = new;
	return (new);
}
