#include "variadic_functions.h"
/**
  * print_strings - function that prints strings, followed by a new line
  * @separator: is the string
  * @n: is the number of strings
  **/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list a;
	unsigned int b;
	char *p;

	va_start(a, n);
	for (b = 0; b < n; b++)
	{
		p = va_arg(a, char *);
		if (p == NULL)
		{
			p = "(nil)";
		}
		if (separator != NULL)
		{
		printf("%s", p);
		if (b != (n - 1))
		{
			printf("%s", separator);
		}
		}
		else
		{
			printf("%s", p);
		}
	}
	printf("\n");
	va_end(a);
}
