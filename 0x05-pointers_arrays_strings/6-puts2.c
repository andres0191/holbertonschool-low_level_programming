#include "holberton.h"
/**
* puts2 -  prints every other character of a string.
* @str : count array
**/
void puts2(char *str)
{
int a = 0, b, c;
	while (str[a] != 0)
	{
		a++;
	}
	for (b = 0; b <= 4; b++)
	{
	c = b * 2;
	_putchar(c + '0');
	}
	_putchar('\n');
}
