#ifndef HEADER_FILE
#define HEADER_FILE
#define _POSIX_C_SOURCE 200809L

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, char *arg, unsigned int line_number);
} instruction_t;

/**
 * struct data_store - app data in one place
 * @file: the monty file
 * @line: the line
 * Description: carries values through the program
 */
typedef struct data_store_s
{
	FILE *file;
	char *line;
} data_store_t;
extern data_store_t data;

void execute(char *line, stack_t **stack, unsigned int line_number);
size_t print_stack(const stack_t *stack);
size_t stack_len(const stack_t *h);
stack_t *add_node(stack_t **head, const int n);
stack_t *add_node_end(stack_t **head, const int n);
void free_stack(stack_t *head);
stack_t *get_dnodeint_at_index(stack_t *head, unsigned int index);
int sum_stack(stack_t *head);
stack_t *insert_dnodeint_at_index(stack_t **h, unsigned int idx, int n);
int delete_dnodeint_at_index(stack_t **head, unsigned int index);
void push(stack_t **stack, char *arg, unsigned int line_number);
void pall(stack_t **stack, char *arg, unsigned int line_number);
void pint(stack_t **stack, char *arg, unsigned int line_number);
void pop(stack_t **stack, char *arg, unsigned int line_number);
void swap(stack_t **stack, char *arg, unsigned int line_number);
void add(stack_t **stack, char *arg, unsigned int line_number);

#endif
