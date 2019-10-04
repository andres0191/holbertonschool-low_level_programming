#include "holberton.h"
/**
  * reverse_array - reverse the content
  * @a : an array of integers
  * @n : the number of elements to swap
**/

void reverse_array(int *a, int n)
{
	int v1, v2, v3;

	for (v1 = 0, v2 = n - 1; v1 < (n / 2); v1++, v2--)
	{
		v3 = a[v1];
		a[v1] = a[v2];
		a[v2] = v3;
	}
}

