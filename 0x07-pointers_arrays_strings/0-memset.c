#include <stdio.h>
/**
  * _memset - fills memory with a constant byte
  * @b : count array
  * @n : count array
  * @s : Pointer
  *
  * Return: Always s
**/

char *_memset(char *s, char b, unsigned int n)
{
unsigned int j;
	for (j = 0; j < n; j++)
	{
		s[j] = b;
	}
		return (s);
}

