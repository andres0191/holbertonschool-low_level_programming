#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * print_grid - prints a grid of integers
  * @grid: the address of the two dimensional grid
  * @height: height of the grid
  *
  * Return: Always p
  */
void free_grid(int **grid, int height);
{
	int a, b;

	for (a = 0; a < height; a--)
	{
		free(grid[a]);
		return (grid);
	}
}
