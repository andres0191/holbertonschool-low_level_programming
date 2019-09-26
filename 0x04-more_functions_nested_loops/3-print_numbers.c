#include "holberton.h"

/**
 *print_numbers - print number of the 0 to 9
 *Return: the rsult store in n
*/

void print_numbers(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
