#include <stdio.h>
/**
  * print_diagsums - prints the sum of the two diagonals
  * @a: pointer
  * @size: size of the input
  **/
void print_diagsums(int *a, int size)
{
	int b, c, d, e;
	
	for (d = 0; d < size; d++)
	{
		b += a[(size + 1) * d];
	}
	for (e = 0; e < size; e++)
	{
		c += a[(size - 1) * (e + 1)];
	}
	printf("%d, %d\n", b, c);
}
