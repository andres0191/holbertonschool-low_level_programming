#include "holberton.h"
/**
* _strcpy - copies the string pointed
* @dest : compared array
* @src : compared array
*
* Return: Always dest.
**/
char *_strcpy(char *dest, char *src)
{
int i = 0;
	for (; src[i] != '\0'; i++)
		dest[i] = src[i];
		dest[i] = '\0';
	return (dest);
}
