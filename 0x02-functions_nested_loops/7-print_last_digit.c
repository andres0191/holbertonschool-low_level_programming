#include "holberton.h"

/**
 * print_last_digit - this function prints the last digit of a number..
 *@n: is compared with numer of the enter
 *@i: this variable save the operation with the module 
 * Return: the last numer save in the variable i
 */
int print_last_digit(int n)
{
int i;
i = n % 10;
{
if (n > 0)
{
_putchar((i) + '0');
}
else
{
i = i * -1;
_putchar(i + '0');
}
}
return (i);
}
