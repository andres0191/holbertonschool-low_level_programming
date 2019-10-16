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
			if (p == NULL)
			{
				for (b = a; b >= 0; b--)
				{
					free(p[b]);
				}
				free(p);
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
