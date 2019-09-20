#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Entry point int a and char b
* Return: Always 0 (Success)
*/
int main(void)
{
int a;
char b;
for (a = 48; a < 58; a++)
{
putchar (a);
}
for (b = 97; b < 103; b++)
{
putchar (b);
}
putchar ('\n');
return (0);
}
