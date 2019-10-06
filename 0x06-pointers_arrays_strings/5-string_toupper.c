#include "holberton.h"
/**
* string_toupper - Change lowercase to uppercase
* @x: pointer
* Return: Always x
**/

char *string_toupper(char *x)
{
	int a;

	for (a = 0; x[a] != '\0'; a++)
	{
		if (x[a] <= 'z' && x[a] >= 'a')
		{
			x[a] = x[a] - ' ';
		}
	}
	return (x);
}
