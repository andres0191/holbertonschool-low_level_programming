#include "function_pointers.h"
/**
  * int_index - function that bowser to number int
  * @array: pointer of input
  * @size: pointer of input
  * @cmp: pointer of input
  *
  *Return: Always 0
  **/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size  < 0 || (array == NULL || cmp == NULL))
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}
	return (-1);
}
