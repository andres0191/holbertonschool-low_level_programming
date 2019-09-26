#include "holberton.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * Return: Always 0.
*/

void more_numbers(void)
{int a, b, c, d;
a = 0;
while (a <= 9)
{
	for (b = 0; b <= 14; b++)
	{
		if (b < 10)
		{
			c = b;
		}
		else
		{
			d = b / 10;
			c = b % 10;
			_putchar(d + '0');
		}
		{
		_putchar(c + '0');
		}
	}
	_putchar('\n');
	a++;
}
}
