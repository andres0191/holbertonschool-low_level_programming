#include "holberton.h"
/**
 * print_alphabet - it's variable take the position of the main in this program
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	char array[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l',
		'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

	int a;
	{
	for (a = 0; a < 26; a++)
		{
		_putchar(array[a]);
		}
	}
_putchar('\n');
}
