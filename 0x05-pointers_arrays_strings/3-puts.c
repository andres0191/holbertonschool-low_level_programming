#include "holberton.h"
/**
  *
  *
  *
**/
void _puts(char *str)
{
int x;
	while (*str != 0)
	{
		str++;
		x++;
	}
	_putchar(x + '0');
	_putchar('\n');

}
