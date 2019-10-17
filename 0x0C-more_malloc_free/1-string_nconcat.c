#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
  * _strlen - returns the length of a string
  *@s :  space in pointer
  * Return: val
  **/
int _strlen(char *s)
{
	int a = 0;

	while (s[a] != 0)
	{
		a++;
	}
	return (a);
}

/**
* string_nconcat - function that concatenates two strings
* @s1: pointer of input
* @s2: pointer of imput
* @n: variable for count
*
* Return: Always
**/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0, k = 0, l = 0;
	char *p;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	i = _strlen(s2);
	if (n >= i)
	{
		n = i;
	}
	j = _strlen(s1);
	p = malloc(sizeof(char) * (j + n + 1));
	if (p == NULL)
	{
		return (NULL);
	}
	for (l = 0; l < j; l++)
	{
		p[l] = s1[l];
	}
	k = l;
	for (l = 0; l < n; l++)
	{
		p[k] = s2[l];
		k++;
	}
	p[k] = '\0';
	return (p);
}
