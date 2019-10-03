#include "holberton.h"
/**
  * *_strcat - concatenates two strings
  * @dest : array
  * @src : array
  * Return: Alway dest
**/

char *_strcat(char *dest, char *src)
{
	int p, q;

	for (q = 0; dest[q] != '\0'; q++)
	{
	}
	for (p = 0; src[p] != '\0'; p++)
	{
		dest[q] = src[p];
		q++;
	}
	q++;
	dest[q] = '\0';
		return (dest);
}
