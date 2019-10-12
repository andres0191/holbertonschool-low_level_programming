#include "holberton.h"
/**
 * _isalpha - check the code for Holberton School students.
 *@c: this variable compared whit the enter.
 * Return: Always 0.
 */
int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
	{
	return (1);
	}
	else if (c <= 90 && c >= 65)
	{
	return (1);
	}
	else
	{
	return (0);
	}
_putchar('\n');
}
