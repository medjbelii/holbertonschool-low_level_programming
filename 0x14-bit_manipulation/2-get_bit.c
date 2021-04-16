#include "holberton.h"
/**
* get_bit - bit idx
*
* @n: bit idx
* @index: bit idx
*
* Return: bit idx
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int x = 1;

	if (index > (sizeof(int) * 8))
		return (-1);
	x <<= index;
	if (x & n)
		return (1);
	else
		return (0);
}
