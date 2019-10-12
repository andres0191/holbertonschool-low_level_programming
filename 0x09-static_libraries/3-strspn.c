#include "holberton.h"
/**
* _strspn - gets the length of a prefix substring
* @s: pointer
* @accept: pointer
*
* Return: always n.
**/

unsigned int _strspn(char *s, char *accept)
{
unsigned int a, b, n = 0;
	for (a = 0; s[a] != ' '; a++)
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
				n++;
		}
	}
	return (n);
}
