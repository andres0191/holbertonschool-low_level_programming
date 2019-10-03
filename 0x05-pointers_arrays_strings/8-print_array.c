#include <stdio.h>
#include "holberton.h"
/**
* print_array -  prints n elements of an array of integers
*@n : count the array
*@a : pointer to count
**/
void print_array(int *a, int n)
{int s;
	for (s = 0; s <= (n - 1); s++)
	{
		if (s != (n - 1))
		{
		printf("%d, ", a[s]);
		}
		else
		{
			printf("%d", a[s]);
		}
	}
	putchar('\n');
}
