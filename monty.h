#ifndef __MONTY_H__
#define __MONTY_H__

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
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
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

extern int number;

FILE *open_file(int argc, char *argv[]);
void call_fun(unsigned int count_line, char *toka, stack_t **h);
void free_stack(stack_t *stack);
void free_buffer(char **input);
void push(stack_t **stack, unsigned int line_number);
stack_t *add_dnodeint(stack_t **h, const int n);
void pall(stack_t **stack, unsigned int line_number);
void print_dlistint(stack_t **h);
size_t dlistint_len(stack_t *h);
int fun_isdigit(char *c);
void pint(stack_t **stack, unsigned int line_number);
void pint_top(stack_t **h, unsigned int line_number);
void swap(stack_t **stack, unsigned int line_number);
stack_t *swap_top(stack_t **h, unsigned int line_number);
void add(stack_t **stack, unsigned int line_number);
stack_t *add_top(stack_t **h, unsigned int line_number);
void pop(stack_t **stack, unsigned int line_number);
int pop_nodes(stack_t **h, unsigned int position, unsigned int line_number);

#endif
