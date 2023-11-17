#include "../monty.h"
#include "../add_nodeint.c"
#include "../print_stack.c"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    stack_t *head;

    head = NULL;
    add_node(&head, 0);
    add_node(&head, 1);
    add_node(&head, 2);
    add_node(&head, 3);
    add_node(&head, 4);
    add_node(&head, 98);
    add_node(&head, 402);
    add_node(&head, 1024);
    print_stack(head);
    return (EXIT_SUCCESS);
}
