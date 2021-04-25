#include "holberton.h"
/**
 * create_array - create
 *
 * @size: create
 * @c: create
 *
 * Return: create
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int x;

	if (size == 0)
		return (NULL);
	arr = malloc(sizeof(char) * size);
	if (arr == NULL)
		return (NULL);
	for (x = 0; x < size; x++)
		arr[x] = c;
	return (arr);
}
