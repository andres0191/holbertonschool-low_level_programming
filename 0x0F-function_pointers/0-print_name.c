#include "function_pointers.h"
/**
  * print_name - function that print one name with date of input
  * @name: pointer of input
  * @f: pointer of input
  * @*: pointer of input
  **/
void print_name(char *name, void (*f)(char *))
{
	if (name != '\0' && f != '\0')
	{
		f(name);
	}
}
