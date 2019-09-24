#include "holberton.h"
/**
 * jack_bauer - function that prints every minute starting from 00:00 to 23:59.
 * Return: Always 0.
 */
void jack_bauer(void)
{
int h1, h2, m1, m2, a;
for (h1 = 0; h1 <= 2; h1++)
{
if (h1 == 2)
{
a = 3;
}
else
{
a = 9;
}
for (h2 = 0; h2 <= a; h2++)
{
for (m1 = 0; m1 <= 5; m1++)
{
for (m2 = 0; m2 <= 9; m2++)
{
_putchar(h1 + '0');
_putchar(h2 + '0');
_putchar(':');
_putchar(m1 + '0');
_putchar(m2 + '0');
_putchar('\n');
}
}
}
}
}
