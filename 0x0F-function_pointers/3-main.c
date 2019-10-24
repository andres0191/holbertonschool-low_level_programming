#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
  * main - function that realized operation simples
  * @argc: count of input
  * @argv: array of input
  *
  * Return: Always 0
  **/
int main(int argc, char **argv)
{
	int (*func)(int, int);
	int a = 0, b = 0, c = 0;

	func = get_op_func(argv[2]);
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (func == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	c = func(a, b);
	printf("%i\n", c);
	return (0);
}
