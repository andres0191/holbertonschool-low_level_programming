#include "holberton.h"
/**
  * get_bit - returns the value of a bit at a given index
  * @n:input
  * @index: input
  *
  * Return: Always 0
  **/
int get_bit(unsigned long int n, unsigned int index)
{

	if (index > 64)
	{
		return (-1);
	}
	if ((1 << index) & n)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (-1);
}
