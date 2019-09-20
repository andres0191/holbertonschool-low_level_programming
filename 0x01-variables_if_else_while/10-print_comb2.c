#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Entry point
* Return: Always 0 (Success)
*/
int main(void)
{
int a, b;
for (b = 48; b <= 57; b++)
{
	for (a = 48; a <= 57; a++)
	{
	putchar (b);
	putchar (a);
	if (a < 57 && 57)
		{
		putchar (',');
		putchar (' ');
		}
	}
}
putchar ('\n');
return (0);
}
