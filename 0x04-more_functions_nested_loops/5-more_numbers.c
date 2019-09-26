#include "holberton.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * Return: Always 0.
*/

void more_numbers(void)
{int x, a, p, u;
a = 0;
while (a <= 9)
{
	for (x = 0; x <= 14; x++)
	{
		p = x / 10;
		u = x % 10;
		if (x < 10)
		{
			_putchar(u + '0');
		}
		else
		{
			_putchar(p + '0');
			_putchar(u + '0');
		}
	}
	a++;
	_putchar('\n');
}
}
