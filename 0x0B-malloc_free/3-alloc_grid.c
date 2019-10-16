#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
* print_grid - prints a grid of integers
* @grid: the address of the two dimensional grid
* @width: width of the grid
* @height: height of the grid
*
* Return: Nothing.
*/
int **alloc_grid(int width, int height)
{
	int a, b, c, d, e;
	int c[width][height];
	char **p;

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
		p[a] = malloc(sizeof(int) * width)
			if (p == NULL)
			{
				for (c = a; c >= 0; c--)
				{
					free(p[c]);
				}
				free(p);
			}
	}
	for (d = 0; d < height; d++)
	{
		for (e = 0; e < width; e++)
		{
			p[d][e] = 0;
		}
	}
	return (p);
}
