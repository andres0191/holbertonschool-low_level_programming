#include "holberton.h"
/**
 * is lower - in this proyect wirte a function that checks for lowercase character.
 *i used the variable c but was created in main _islower.
 *
 * Return: 1 and 0 depend of the case
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
	return(1);
	}
	else
	{
	return (0);
	}
_putchar('\n');
}
