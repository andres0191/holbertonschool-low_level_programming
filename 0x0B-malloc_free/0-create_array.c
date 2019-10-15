#include "holberton.h"
#include <stdlib.h>
/**
* create_array - initializes it with a specific char.
* @size: size of in
* @c: character in
*
* Return: Always j
**/
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *j;

	if (size == 0)
		return (NULL);

	j = malloc(size * sizeof(char));

	for (i = 1; i <= size; i++)
	{
		j[i] = c;
	}
	return (j);
}
