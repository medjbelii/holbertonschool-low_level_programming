#include "holberton.h"
/**
* set_bit - bit idx
*
* @n: bit idx
* @index: bit idx
*
* Return: bit idx
*/
int set_bit(unsigned long int *n, unsigned int index)
{
unsigned int x = 1;

if (index > (sizeof(int) * 8))
return (-1);
x <<= index;
*n = (*n | x);
return (1);
}
