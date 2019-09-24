#include "holberton.h"
/**
 * print_alphabet_x10 - print alphabet in 10 times.
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
int a, b;
while (b <= 9)
{
	for (a = 'a'; a <= 'z'; a++)
		{
		_putchar(a);
		}
_putchar('\n');
++b;
}
}
