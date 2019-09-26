#include "holberton.h"

/**
* _isupper - this function copared if c is a digit or not.
*@c: compared with one digit
* Return: Always 0.
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
