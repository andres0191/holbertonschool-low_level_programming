#include "holberton.h"
/**
  * _strncpy - concatenates two strings
  * @dest: array
  * @src: array
  * @n : in
  * Return: Always dest
**/

char *_strncpy(char *dest, char *src, int n)
{
	int b;

	for (b = 0; b < n && src[b] != '\0'; b++)
	{
		dest[b] = src[b];
	}
	for (; b < n; b++)
	{
		dest[b] = '\0';
	}
	return (dest);
}
