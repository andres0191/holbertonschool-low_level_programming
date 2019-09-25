#include "holberton.h"

/**
 * times_table - created matriz of multiplicate.
 * Return: Always 0.
 */
void times_table(void)
{
	int f, c, r, p, u;
	for (c = 0; c <= 9; c++)
	{
		for (f = 0; f <= 9; f++)
		    {
				r = f * c;
				if (r == 0)
				{
				    _putchar(r +'0');
				}
				else if (r >= 10)
				{
				    p = r / 10;
				    u = r % 10;
				    _putchar(',');
				    _putchar(' ');
				    _putchar(p + '0');
				    _putchar(u + '0');
				}
				else
				{
				    _putchar(',');
				    _putchar(' ');
				    _putchar(' ');
				    _putchar(r + '0');
				}
			}
		_putchar('\n');
	}
_putchar('\n');
}
