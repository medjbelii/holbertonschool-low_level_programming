#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - diag sum
 * @a: array
 * @size: int
 */
void print_diagsums(int *a, int size)
{
	int x = 0;
	int s1 = 0;
	int s2 = 0;

	for (; x < size; x++)
	{
		s1 = s1 + *(a + x * size + x);
		s2 = s2 + *(a + x * size + size - 1 - x);
	}
	printf("%i, %i\n", s1, s2);
}
