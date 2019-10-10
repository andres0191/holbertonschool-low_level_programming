#include "holberton.h"
/**
* radicando - sqrt multiplicate one number
* @a: compared
* @b: compared
*
* Return: Always variable
**/

int radicando(int a, int b)
{
	int x;

	x = b * b;
	if (x > a)
	{
		return (-1);
	}
	if (x == a)
	{
		return (b);
	}
	return (radicando(a, b + 1));
}
/**
  * _sqrt_recursion - squrt returns the natural square root of a number.
  * @n: value of the input
  *
  * Return: Always variable
  **/
int _sqrt_recursion(int n)
{
	int a = 0;

	return (radicando(n, a));
}

