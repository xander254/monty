#include "monty.h"

/**
  * print_all - print the data in the entire stack
  */
void print_all(stack_t *head)
{
	stack_t *temp;

	if (is_empty(head))
	{
		fprintf(stderr, "The stack is empty");
	}
	else
	{
		temp = head;
		while (temp->next != NULL)
		{
			printf("%d\n", temp->n);
			temp = temp->next;
		}
	}
}
