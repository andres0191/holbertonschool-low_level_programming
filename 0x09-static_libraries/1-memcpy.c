#include "holberton.h"
/**
 * _memcpy - copies memory area.
 * @dest : pointers
 * @src : pointers
 * @n : compared
 *
 * Return: Always dest
**/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int p;

	for (p = 0; p < n; p++)
	{
		dest[p] = src[p];
	}
return (dest);
}
