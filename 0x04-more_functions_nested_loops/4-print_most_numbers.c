#include "holberton.h"

/**
 *print_most_numbers - this function print the number from 0 to 9
 *Return: Always 0.
*/

void print_most_numbers(void)
{int x;

	for (x = 48; x <= 57; x++)
	{
		if (x != 50 && x != 52)
		{
		_putchar(x);
		}
	}
	_putchar('\n');
}
