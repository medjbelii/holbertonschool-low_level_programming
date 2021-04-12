#include "holberton.h"
/**
 * _memset - memeset
 * @s: string
 * @b: char
 * @n: unsigned int
 * Return: S
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int cnt;

	for (cnt = 0; cnt < n; cnt++)
	s[cnt] = b;
	return (s);
}
