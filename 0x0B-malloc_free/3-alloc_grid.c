#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
* alloc_grid - returns a pointer to a 2 dimensional array of integer
* @width: width of the grid
* @height: height of the grid
*
* Return: Always p
*/
int **alloc_grid(int width, int height)
{
	int a, b, c, d;
	int **p;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	p = malloc(sizeof(int *) * height);
	if (p == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < height; a++)
	{
		p[a] = malloc(sizeof(int) * width);
			if (p[a] == NULL)
			{
				for (b = a; b >= 0; b--)
				{
					free(p[b]);
				}
				free(p);
				return (NULL);
			}
	}
	for (c = 0; c < height; c++)
	{
		for (d = 0; d < width; d++)
		{
			p[c][d] = 0;
		}
	}
	return (p);
}
