#include "holberton.h"
/**
* _strlen_recursion - returns the length of a string.
* @s: pointer
*
* Return: Always 0
**/
int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
