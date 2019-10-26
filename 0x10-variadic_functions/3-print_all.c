#include "variadic_functions.h"
#include <stdarg.h>

/**
  * fun2 - function that compare type char with the input
  * @d: copy of list of the input
  **/
void fun2(va_list d)
{
	printf("%c", (char)va_arg(d, int));
}
/**
  * fun3 - function that compare type int with the input
  * @d: copy of list of the input^
  **/
void fun3(va_list d)
{
	printf("%i", va_arg(d, int));
}
/**
  * fun4 - function that compare type float witht hte input
  * @d: copy of list of the input^
  **/
void fun4(va_list d)
{
	printf("%f", (float)va_arg(d, double));
}
/**
  * fun5 - function that compare type char with the input
  * @d: copy of list of the input^
  **/
void fun5(va_list d)
{
	char *u = va_arg(d, char *);

	switch (*u)
	{
		case '\0':
			printf("(nil)");
			break;
		default:
		printf("%s", u);
	}
}
/**
  * print_all - function that prints anything
  * @format: input
  **/
void print_all(const char * const format, ...)
{
	ty typeofdate[] = {
		{'c', fun2},
		{'i', fun3},
		{'f', fun4},
		{'s', fun5}
		};
	va_list b;
	int i = 0, e = 0;

	va_start(b, format);
	while (format && format[i])
	{
		while (e < 4)
		{
			if (format[i] == typeofdate[e].a)
			{
				typeofdate[e].fun(b);
				if (format[i + 1])
				{
					printf(", ");
				}
			}
			e++;
		}
		e = 0;
		i++;
	}
	printf("\n");
	va_end(b);
}
