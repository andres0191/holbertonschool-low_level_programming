#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int print_last_digit(int n)
{
int i;
i = n % 10;
{
if (n > 0)
{
_putchar((i) + '0');
}
else
{
i = i * -1;
_putchar(i + '0');
}
}
return (i);
}
