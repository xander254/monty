#include "monty.h"

/**
  * main - The entry point of the program
  * Return: void
  * @argc: argument count
  * @argv: argument vectors
  */

/* global variables */
stack_t *head = NULL;
stack_t *top = NULL;

int main(int  argc,char **argv)
{
	filecheck(argc, argv);

	return (0);
}
