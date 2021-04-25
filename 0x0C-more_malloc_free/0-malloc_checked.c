#include "holberton.h"
/**
 * malloc_checked - check
 *
 * @b: check
 *
 * Return: check
 */
void *malloc_checked(unsigned int b)
{
	char *a;

	a = malloc(b);
	if (a == NULL)
	{
	exit(98);
	}
	else
	return (a);
}
