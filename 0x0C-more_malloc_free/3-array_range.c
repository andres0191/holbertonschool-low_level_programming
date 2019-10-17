#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* array_range - functiont that created one matriz of integer
* @min: input number min
* @max: input number max
*
* Return: Always 0
**/
int *array_range(int min, int max)
{
	int *p;
	int a;

	if (min > max)
	{
		return (NULL);
	}
	p = malloc(sizeof(int) * (max - min + 1));
	if (p == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < (max - min + 1); a++)
	{
		p[a] = min + a;
	}
	return (p);
}
