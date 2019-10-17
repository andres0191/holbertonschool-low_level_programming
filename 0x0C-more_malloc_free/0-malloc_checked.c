#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
* malloc_checked - function that asigned memory
* @b: input by user
*
* Return: Always a
**/
void *malloc_checked(unsigned int b)
{
	int *a;

	a = malloc(b);
	if (a == NULL)
	{
		exit(98);
	}
	return (a);
}
