#include "monty.h"

/**
  * is_empty - checks if the stack is empty
  * Return: true is empty else false
  */

bool is_empty(void)
{
	if (head == NULL)
	{
		return (true);
	}
	return (false);
}
