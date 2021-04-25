#include "holberton.h"
/**
 * _calloc - arr
 *
 * @nmemb: arr
 * @size: arr
 *
 * Return: arr
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int x;
	char *ray;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ray = malloc(nmemb * size);
	if (ray == NULL)
		return (NULL);
	for (x = 0; x < (nmemb * size); x++)
		ray[x] = 0;
	return (ray);
}
