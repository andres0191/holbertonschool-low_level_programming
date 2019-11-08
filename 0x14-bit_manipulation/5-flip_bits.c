#include "holberton.h"
/**
  * flip_bits - returns the number of bits from one number to another
  * @n: input
  * @m: input
  *
  * Return: Always 1
  **/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	if (m > 64)
	{
		return (-1);
	}
	if ((1 << m) ^ n)
		return (1);
	return (0);
}
