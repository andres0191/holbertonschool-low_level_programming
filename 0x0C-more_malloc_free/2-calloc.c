#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* _calloc - function that asigned memory for one matriz
* @nmemb: input
* @size: input
*
* Return: Always pointer p
**/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int a;
	char *p;

	if (nmemb == 0)
	{
		return (NULL);
	}
	if (size == 0)
	{
		return (NULL);
	}
	p = malloc(sizeof(char) * (nmemb * size));
	if (p == 0)
	{
		return (NULL);
	}
	for (a = 0; a < (nmemb * size); a++)
	{
		p[a] = 0;
	}
	return (p);
}
