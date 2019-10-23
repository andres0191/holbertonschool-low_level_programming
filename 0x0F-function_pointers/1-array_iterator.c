#include "function_pointers.h"
/**
  * array_iterator - function fiven as a parameter on each element of an array
  * @array: pointer of input
  * @size: pointer of input
  * @action:  pointer of input
  **/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != '\0')
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
