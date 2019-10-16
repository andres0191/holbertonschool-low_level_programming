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
	int a, b, c, d, e;
	char *p;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (a = 0; s1[a] != '\0'; a++)
	{
		for (b = 0; s2[b] != '\0'; b++)
		{
			;
		}
		b++;
	}
	c = a + b;
	p = malloc(c * sizeof(char));
	if (p == NULL)
	{
		return (NULL);
	}
	for (d = 0; s1[d] != '\0'; d++)
	{
		p[d] = s1[d];
	}
	for (e = 0; s2[e] != '\0'; e++)
	{
		p[d + e] = s2[e];
	}
		return (p);
}

