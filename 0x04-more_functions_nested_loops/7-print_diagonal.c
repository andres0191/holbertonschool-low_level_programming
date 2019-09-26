#include "holberton.h"

/**
 *print_diagonal - This function draws a diagonal line on the terminal.
 *@n: variable
*/

void print_diagonal(int n)
{
int a, b;
if (n > 0)
{
for (a = 1; a <= n; a++)
{
for (b = 1; b < a; b++)
{
_putchar(' ');
}
_putchar(92);
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
