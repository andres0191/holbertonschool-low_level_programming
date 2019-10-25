#include "variadic_functions.h"
#include <stdarg.h>

/**
  * sum_them_all - function that return the sum of all its parameters
  * @n: int of input
  *
  * Return: Always 0
  **/
int sum_them_all(const unsigned int n, ...)
{
	va_list a;
	unsigned int b, s = 0;

	if (n == 0)
	{
		return (0);
	}
	va_start(a, n);
	for (b = 0; b < n; b++)
	{
		s += va_arg(a, int);
	}
	va_end(a);
	return (s);
}
