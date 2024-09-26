#ifndef _MONTY_H_
#define _MONTY_H_

#define _GNU_SOURCE
#define _POSIX_C_SOURCE >= 200809L || _XOPEN_SOURCE >= 700
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

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
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
/* Head of the list*/
extern stack_t *head;
extern stack_t *top;

/* File Operations*/
void filecheck(int argc, char **argv);
void read_file(char *filename);
void tokenize(char *buffer);
void push_to_stack(int number);
void print_all(void);
bool is_empty(void);
void parser(char *buffer);
#endif /* MONTY_H */
