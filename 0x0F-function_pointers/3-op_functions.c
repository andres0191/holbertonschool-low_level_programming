#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * op_add - add into two numbers
  * @a: input
  * @b: input
  *
  * Return: Always a+b
  **/
int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - rest into two numbers
  * @a: input
  * @b: input
  * Return: Always a-b
  **/
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - multiplicate into two numbers
  * @a: input
  * @b: input
  *
  * Return: Always a*b
  **/
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - division into two numbers
  * @a: input
  * @b: input
  *
  * Return: Always a/b
  **/

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
  * op_mod - module into two numbers
  * @a: input
  * @b: input
  *
  * Return: Always a%b
  **/
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
