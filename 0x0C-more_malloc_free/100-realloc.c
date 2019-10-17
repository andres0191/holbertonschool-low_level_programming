#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* realloc -  function that reasigned one block of memory
* @ptr: pointer of input
* @old_size: input
* @new_size: input
**/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int a, b, c, d;
	int *p;

	for (a = 0; ptr[a] != '\0'; a++)
	{

	if (old_size == 0 && ptr != NULL)
	{
		return (NULL);
	}
	if ( old_size < new_size)
	{


}
