#include "holberton.h"

/**
 * _abs - computes the absolute value of an integer.
 * @n: this variable compared with the number delcarataed.
 * Return: 0 depend the case.
 */
int _abs(int n)
{
	if (n < 0)
	{
	n = (n * (-1));
	}
	return (n);
}
