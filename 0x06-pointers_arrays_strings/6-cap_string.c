#include "holberton.h"
/**
* cap_string - capitalizes all words of a string.
* @n : pointer
* Return: Always n
**/

char *cap_string(char *n)
{
	int a;

	for (a = 0; n[a] != '\0'; a++)
	{
		if (n[a] >= 'a' && n[a] <= 'z')
		{
			if (n[a - 1] == ' ' || n[a - 1] == '.' || n[a - 1] == '\n')
			{
			n[a] = n[a] - 32;
			}
		}
	}
	return (n);
}
