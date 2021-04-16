#include "holberton.h"
/**
* flip_bits - bit idx
*
* @n: bit idx
* @m: bit idx
*
* Return: bit idx
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int total;
	unsigned int x = 0;
	int y = 0;

	total = n ^ m;
	while (y < 64)
	{
		x += (total & 1);
		total = total >> 1;
		y++;
	}
	return (x);
}
