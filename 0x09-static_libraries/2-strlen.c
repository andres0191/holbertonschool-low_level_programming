#include "holberton.h"
/**
* _strlen - returns the length of a string
*@s :  space in pointer
* Return: val
**/
int _strlen(char *s)
{int a;
	while (*s != 0)
	{
		s++;
		a++;
	}
	return (a);
}
