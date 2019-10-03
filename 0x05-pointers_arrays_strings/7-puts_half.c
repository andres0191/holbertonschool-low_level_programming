#include "holberton.h"
/**
* puts_half - prints half of a string
*@str : count the array and print the count
**/
void puts_half(char *str)
{
int a, b;
while (str[a] != 0)
{
	a++;
}
b = (a + 1) / 2;
for (; str[b] != '\0'; b++)
{
	_putchar(str[b]);
}
_putchar('\n');
}
