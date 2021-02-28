#include "holberton.h"
#include <stdio.h>
/**
 * _strncat - concats two strings
 * @dest: destination
 * @src: source
 * @n: number
 * Return: el jaw el kol
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;
i = 0;
while (src[i] != '\0' && i < n)
{
*(dest + i) = *(src + i);
i++;
}
while (i < n)
{
*(dest + i) = '\0';
i++;
}
return (dest);
}
