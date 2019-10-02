#include "holberton.h"
/**
* puts2 -  prints every other character of a string.
* @str : count array
**/
void puts2(char *str)
{
int a = 0, b;
	while (str[a] != 0)
	{
		a++;
	}
	for (b = 0; b <= (a - 1); b = b + 2)
	{
	_putchar(b + '0');
	}
	_putchar('\n');
}
