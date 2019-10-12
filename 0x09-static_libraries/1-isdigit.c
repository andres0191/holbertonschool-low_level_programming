#include "holberton.h"

/**
  *_isdigit - compared c with numbers in the rank 0 to 9
  *@c: is for compared
  *Return: 1 and 0 depend of the case
*/

int _isdigit(int c)
{
	if (c <= '9' && c >= '0')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
