#include "holberton.h"
/**
* print_rev - prints a string in reverse
* @s : variable count string
**/
void print_rev(char *s)
{
	{int a = 0, y;
		while (s[a] != 0)
		{
			a++;
		}
	for (y = a - 1; y >= 0; y--)
	{
		_putchar(s[y]);
	}
	}
	_putchar('\n');
}
