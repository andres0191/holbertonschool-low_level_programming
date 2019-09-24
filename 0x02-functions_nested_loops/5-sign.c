#include "holberton.h"

/**
 * print_sign - print the signe.
 * @n: this variable compared with the number delcarataed.
 * Return: 1, 0 or -1 depend the case.
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
