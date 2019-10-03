#include "holberton.h"
/**
  * _strcmp  - compares two strings
  * @s1: array
  * @s2: array
  * Return: Always 0
**/

int _strcmp(char *s1, char *s2)
{
	int a = 0;

	while (s1[a] != '\0')
	{
		if (s1[a] > s2[a])
		{
			return (s1[a] - s2[a]);
		}
		else if (s1[a] < s2[a])
		{
			return (s1[a] - s2[a]);
		}
		a++;
	}
	return (0);
}
