#include "holberton.h"
/**
* free_grid - free 
*
* @grid: free
* @height: free
*
* Return: free
*/

void free_grid(int **grid, int height)
{
	int x = 0;

	while (x < height)
	{
		free(grid[x]);
		x++;
	}
	free(grid);
}
