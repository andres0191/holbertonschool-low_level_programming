#include "holberton.h"
/**
* puts_half - prints half of a string
* str : array
**/
void puts_half(char *str)
{
int a, b;
while (str[a] != 0)
{
	a++;
}
for (b = a; b >= (a / 2); b++)
{
	_putchar(str[b]);
}
_putchar('\n');
}
