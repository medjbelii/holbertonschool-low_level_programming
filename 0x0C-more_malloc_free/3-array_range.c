#include "holberton.h"
/**
 * array_range - arr
 *
 * @min: var
 * @max: var*
 *
 * Return: arr
 */
int *array_range(int min, int max)
{
	int y = 0, y, *z;

	if (min > max)
		return (NULL);
	y = max - min + 1;
	z = malloc(sizeof(int) * y);
	if (z == NULL)
	{
		free(z);
		return (NULL);
	}
	for (; y < y; y++, min++)
	{
		z[y] = min;
	}
	return (z);
}
