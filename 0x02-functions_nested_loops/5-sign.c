#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int print_sign(int n)
{
if (n >= '0')
{
return(1);
}
else if (n == '0')
{
return(0);
}
else
{
return(-1);
}
}
