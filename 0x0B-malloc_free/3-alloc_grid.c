#include "holberton.h"
/**
* alloc_grid - array
*
* @width: array
* @height: array
*
* Return: array
*/

int **alloc_grid(int width, int height)
{
	int **res;
	int x, y, z;

	if (width <= 0 || height <= 0)
	return (NULL);

	res = malloc(sizeof(int *) * height);
	if (res == NULL)
	return (NULL);

	for (x = 0; x < height; x++)
	{
		res[x] = malloc(sizeof(int) * width);
		if (res[x] == NULL)
		{
			for (y = 0; y < x; y++)
			free(res[y]);
			free(res);
			return (NULL);
		}
		for (z = 0; z < width; z++)
		res[x][z] = 0;
	}
	return (res);
}
