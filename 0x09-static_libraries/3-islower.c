#include "holberton.h"
/**
 *_islower - function that checks for lowercase character.
 *@c: this variable compared whit the enter
 * Return: 1 and 0 depend of the case
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{

	return (1);

	}
	else
	{

	return (0);

	}
_putchar('\n');
}
