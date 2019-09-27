#include "holberton.h"

/**
*print_square -  function that prints a square, followed by a new line.
*@size: variable for compare
*/

void print_square(int size)
{
int a, b;
	if (size > 0)
	{
		for (a = 1; a <= size; a++)
		{
			for (b = 1; b <= size; b++)
			{
			_putchar(35);
			}
			_putchar('\n');
		}
	}
		else
		{
			_putchar('\n');
		}
}
