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
	unsigned long int a = 0, b = 0;

	a = (m ^ n);
	while (a != 0)
	{
		b = ((a & 1) + b);
		a = (a >> 1);
	}
	return (b);
}
