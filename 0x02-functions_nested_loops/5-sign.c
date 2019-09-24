#include "holberton.h"

/**
 * Description:  in this proyect i was write a function that prints the sign of a number,
 * used the variable n that was created in main the name @print_sing.
 *
 * Variable description: i used variable n for compair whit the numer that i decide,
 * the variable print_sing was used and declarated with main in other file.c
 *
 * Return: 1, 0 or -1 depend the case.
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
