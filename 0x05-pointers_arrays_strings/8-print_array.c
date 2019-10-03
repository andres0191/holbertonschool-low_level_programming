#include <stdio.h>
#include "holberton.h"
/**
* print_array -  prints n elements of an array of integers
*@n : count the array
*@a : pointer to count
**/
void print_array(int *a, int n)
{int s;
while (a[n] != 0)
{
n++;
}
for (s = 0; s < (n - 1); s++)
{
	printf("%d", a[s]);
if (s != (n - 2))
{
	printf(", ");
}
}
putchar('\n');
}
