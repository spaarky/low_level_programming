#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2D array of integers
 * @width: columns
 * @height: rows
 *
 * Return: pointer to 2d array
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0) /*validate height and width input*/
		return (NULL);

	grid = malloc(height * sizeof(int *)); /*allocate memory of rows*/

	if (grid == NULL) /*validate memory*/
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int)); /*allocate memory of columns for each rows*/
		if (grid[i] == NULL) /*validate memory*/
		{
			for (i = 0; i < height; i++)
				free(grid[i]);
			free(grid);
			return (NULL);
		}
		for (j = 0; j < width; j++) /*set the array values to 0*/
			grid[i][j] = 0;
	}
	return (grid);
}
