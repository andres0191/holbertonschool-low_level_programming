#include "stdio.h"
/**
  *
  *
**/
void print_array(int *a, int n)
{int s;
while (a[n] != 0)
{
	n++;
}
for (s = 0; s < n; s++)
{

	printf("%d, ", a[s]);
}
putchar('\n');
}
