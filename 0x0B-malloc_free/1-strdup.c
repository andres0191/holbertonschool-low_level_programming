#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
* _strdup - returns a pointer to a new string
* @str: pointer of the in
*
* Return: Always b
**/
char *_strdup(char *str)
{
	int a = 0, c;
	char *b;

	if (str == NULL)
	{
		return (NULL);
	}
	for (a = 0; str[a] != '\0'; a++)
	{
		;
	}
	a++;
	b = malloc(a * (sizeof(str)));
	if (b == NULL)
	{
		return (NULL);
	}
	for (c = 0; c <= a; c++)
	{
		b[c] = str[c];
	}
	return (b);
}
