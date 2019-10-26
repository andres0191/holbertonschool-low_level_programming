#ifndef VARIADICFUNCTIONS_H
#define VARIADICFUNCTIONS_H
#include <stdarg.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
/**
 * struct input - function that compare with the input^
 * @a: char^
 * @fun: fun^
 **/
typedef struct input
{
	char a;
	void (*fun)(va_list);
} ty;
#endif
