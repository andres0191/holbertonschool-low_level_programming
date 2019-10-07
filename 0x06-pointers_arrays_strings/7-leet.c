#include "holberton.h"
/**
* leet - encodes a string into 1337
* @a : pointer
*
* Return: Always a
**/
char *leet(char *a)
{
int b, c;
char x[] = "4433007711";
char y[] = "AaEeOotTlL";

	for (b = 0; a[b] != '\0'; b++)
	{
		for (c = 0; y[c] != '\0'; c++)
		{
			if (a[b] == y[c])
		{
			a[b] = x[c];
		}
		}
	}
return (a);
}
