#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
* str_concat - function that concatenates two string
* @s1: pointer of input
* @s2: pointer of input
*
* Return: Always 0
**/
char *str_concat(char *s1, char *s2)
{
	int a = 0, b = 0, c, d, e;
	char *p;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[a])
	{
		a++;
	}
	while (s2[b])
	{
		b++;
	}
	b++;
	c = a + b;
	p = malloc(c * sizeof(char));
	if (p == NULL)
	{
		return (NULL);
	}
	for (d = 0; d < a; d++)
	{
		p[d] = *s1;
		s1++;
	}
	for (e = 0; e < b; e++)
	{
		p[d + e] = *s2;
		s2++;
	}
		return (p);
}

