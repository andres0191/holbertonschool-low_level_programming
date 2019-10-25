#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
/**
  * print_numbers -  function that prints numbers, followed by a new line
  * @separator: char of input
  * @n: int of input
  *
  * Return: Always 0
  **/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list a;
	unsigned int b = 0;

	va_start(a, n);
	if (separator == NULL)
	{
		exit(98);
	}
	for (b = 0; b < n; b++)
	{
		printf("%i", va_arg(a, int));
		if (b != (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(a);
}
