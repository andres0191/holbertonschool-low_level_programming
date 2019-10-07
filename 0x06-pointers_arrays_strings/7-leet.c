#include "holberton.h"
/**
*
*
*
**/
char *leet(char *a)
{
int b = 0, c = 0;
int X[5] = {0,1,3,4,7};

for (; X[c] != '\0'; c++) 
{
	for (; a[b] != '\0'; b++)
	{
		if (a[b] == 'a' || a[b] == 'A' || a[b] == 'e'
		|| a[b] == 'E' || a[b] == 'o' || a[b] == 'O'
		|| a[b] == 't' || a[b] == 'T' || a[b] == 'l'
		|| a[b] == 'L')
		{
			a[b] = a[b + X];
		}
	}
}
return (a);
}
