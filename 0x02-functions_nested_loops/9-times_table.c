#include "holberton.h"

/**
 * times_table - created matriz of multiplicate.
 * Return: Always 0.
 */
void times_table(void)
{
int f, c, r;
for (f = 0; f <= 9; f++)
	for (c = 0; c <= 9; c++)
	{
		r = f * c;
		_putchar(r + '0');
	}
		if (r < 9)
		{
		_putchar('\n');
		}
}
