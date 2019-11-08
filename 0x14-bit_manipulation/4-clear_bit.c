#include "holberton.h"
/**
  * clear_bit - sets the value of a bit to 0 at a given index
  * @n: pointer of input
  * @index: input
  *
  * Return: Always 0
  **/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
	{
		return (-1);
	}
	*n = (~(1 << index) & *n);
	return (1);
}
