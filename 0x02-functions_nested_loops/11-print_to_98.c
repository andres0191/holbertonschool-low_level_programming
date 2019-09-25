#include "holberton.h"
#include "stdio.h"

/**
 * print_to_98 - compared n number with 98
 * @n: numer of enter
 * Return: Always 0.
 */
void print_to_98(int n)
{
	if (n < 99)
	{
		for (; n < 99; n++)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
		}
		printf("\n");
	}
	else if (n > 99)
	{
		for (; n > 97; n--)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
				}
			}
		printf("\n");
	}
}
