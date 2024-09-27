#include "monty.h"

/**
  * push_to_stack - push data to the stack using push opcode
  * @number: the number to be added in the list->data part
  * Return: what is added on the stack
  */
void push_to_stack(stack_t **head, stack_t **top, int number)
{
	stack_t *new_node;

	new_node = (stack_t *)malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		fprintf(stderr, "Error: malloc failed");
		exit(EXIT_FAILURE);
	}
	new_node->n = number;
	if (is_empty(*top))
	{
		new_node->prev = NULL;
		new_node->next = NULL;

		*head = new_node;
		*top = new_node;
	}
	else
	{
		(*top)->next = new_node;
		new_node->next = NULL;
		new_node->prev = *top;
		*top = new_node;
	}
}

