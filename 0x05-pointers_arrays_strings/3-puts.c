#include "holberton.h"
/**
  * _puts -  prints a string
  * @str : count space in array
  *
**/
void _puts(char *str)
{
int x, y;
	while (str[y] != 0)
	{
		y++;
	}
	for (x = 0; x <= y; x++)
	{
	_putchar(str[x]);
	}
	_putchar('\n');
}
