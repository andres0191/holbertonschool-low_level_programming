#include "holberton.h"
/**
* string_toupper - -changes all lowercase to uppercase
* x : pointer and array
* Return : value of pointer
**/

char *string_toupper(char *x)
{
	int a;

	for (a = 0; x[a] != '\0'; a++)
	{
		if (x[a] <= 122 && x[a] >= 97)
		{
			x[a] = x[a] - 32;
		}
	}
	return (x + '0');
}
