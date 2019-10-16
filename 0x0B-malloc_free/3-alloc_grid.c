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
	int a, b;
	int c[width][height];
	char *p;

	if ( width == 0 || height == 0)
	{
		return (NULL);
	}
	for (a = 0; a <= width; a++)
	{
		for (b = 0; b <= height; b++)
		{
			

}
