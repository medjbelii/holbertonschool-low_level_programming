#include "holberton.h"
/**
 * _memcpy - mem copy
 * @dest: string
 * @src: char
 * @n: unsigned int
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int count;

		for (count = 0; count < n; count++)
		dest[count] = src[count];
	return (dest);
}
