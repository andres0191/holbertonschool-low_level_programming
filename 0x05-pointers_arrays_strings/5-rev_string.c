#include "holberton.h"
/**
* rev_string - function that reverses a string
* @s : count array
**/

void rev_string(char *s)
{
	{int a = 0, x, y, z;
		while (s[a] != 0)
		{
			a++;
		}
		x = a - 1;
		for (y = x; y > (x / 2); y--)
		{
			z = s[y];
			s[y] = s[x - y];
			s[x - y] = z;
		}
	}
}
