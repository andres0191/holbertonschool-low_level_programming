#include "holberton.h"
/**
  * _strchr - locates a character in a string.
  * @s : pointer
  * @c : compared
  *
  * Return: Always p.
**/
char *_strchr(char *s, char c)
{
	int a;
	char *p = 0;


	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] == c)
		{
			p = &s[a];
			return (p);
		}
		else if (s[a] == '\0')
		{
			return (p);
		}
	}
	return ('\0');
}
