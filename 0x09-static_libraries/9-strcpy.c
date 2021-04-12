#include "holberton.h"
/**
 * _strcpy - str
 * @dest: dest
 * @src: src
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int x;

	for (x = 0; *(src + x); x++)
		*(dest + x) = *(src + x);
	*(dest + x) = *(src + x);
	return (dest);
}
