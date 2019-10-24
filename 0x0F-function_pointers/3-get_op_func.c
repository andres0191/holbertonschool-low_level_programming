#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
#include "3-calc.h"
#include <string.h>
/**
  * get_op_func - function that select operator correct for process
  * @s: operator for argument of the program
  *
  * Return: Always 0
  **/
int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
};
int i = 0;

	while (ops[i].op)
	{
		if (strcmp(ops[i].op, s) == 0)
		{
			return (ops[i].f);
		}
		i++;
	}
return (NULL);
}
