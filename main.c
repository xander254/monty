#include "monty.h"

/**
  * main - The entry point of the program
  * Return: void
  * @argc: argument count
  * @argv: argument vectors
  */


int main(int  argc,char **argv)
{
	stack_t *head = NULL;
	stack_t *top = NULL;

	filecheck(argc, argv);
	push_to_stack(&head, &top, 5);
	push_to_stack(&head, &top, 10);
	print_all(head);

	return (0);
}
