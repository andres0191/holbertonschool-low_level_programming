#include "holberton.h"
/**
  * _strncat - Concatenate two string
  * @dest : array
  * @src : array
  * @n : count array
  * Return: Always dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int a = 0, b = 0;

	while (dest[a] != '\0')
	{
		a++;
	}
	for (b = 0; b < n && src[b] != '\0'; b++)
	{
		dest[a + b] = src[b];
	}
	dest[a + b] = '\0';
	return (dest);
}
