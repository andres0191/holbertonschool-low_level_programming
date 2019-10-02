#include "holberton.h"
/**
* print_triangle - function that prints a triangle
* @size : variable for print triangle
**/

void print_triangle(int size)
{
int p, q;
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (p = 1; p <= size; p++)
		{
			for (q = size; q > 0; q--)
			{
				if (q <= p)
				 {
					 _putchar(35);
				 }
				 else
				 {
					 _putchar(' ');
				 }
			}
			_putchar('\n');
		}
	}
}
