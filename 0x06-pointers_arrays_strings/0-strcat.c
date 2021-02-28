#include "holberton.h"
#include <stdio.h>
/**
 * _strcat - concats two strings
 * @dest: destination
 * @src: source
 * Return: el jaw el kol
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	j = 0;
	while (dest[j] != '\0')
	j++;
	i = 0;
	while (src[i] != '\0')
	{
		*(dest + j) = *(src + i);
		i++;
		j++;
	}
	return (dest);
}
