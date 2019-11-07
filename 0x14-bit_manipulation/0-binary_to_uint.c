#include "holberton.h"
/**
  * binary_to_unit - converts a binary number to an unsiged int
  * @b: pointer of input
  *
  * Return: Always 0
  **/
unsigned int binary_to_uint(const char *b)
{
	unsigned int incremento = 0;
	int i = 0, j = 0, acumular = 1;

	while (b == NULL)
	{
		return (0);
	}
	while (b[i] != '\0')
	{
		i++;
	}
	for (j = i - 1; j >= 0; j--)
	{
		if (b[j] != '0' && b[j] != '1')
		{
			return (0);
		}
		if (b[j] == '1')
		{
			incremento += acumular;
		}
		acumular = acumular * 2;
	}
	return (incremento);
}
