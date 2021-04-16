#include "holberton.h"
/**
* clear_bit - bit idx
*
* @n: bit idx
* @index: bit idx
*
* Return: bit idx
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int x = 1;

	if (index > (sizeof(int) * 8))
		return (-1);
	x <<= index;
	x = ~x;
	*n = (*n & x);
	return (1);
}
