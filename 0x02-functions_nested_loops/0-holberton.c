#include "holberton.h"
/**
* main - Entry point
* Return: Always 0 (Success)
*/
int main(void)
{
char array [9] = {'H', 'o', 'l', 'b', 'e', 'r', 't', 'o', 'n'};
int l;
for (l = 0; l < 9; l++)
{
_putchar (array[l]);
}
_putchar ('\n');
return (0);
}
