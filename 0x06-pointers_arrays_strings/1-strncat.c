#include "holberton.h"
#include <stdio.h>
/**
 * _strncat - concats two strings
 * @dest: destination
 * @src: source
 * @n: number
 * Return: el jaw el kol
 */
char *_strncat(char *dest, char *src, int n)
{
int destl, srcl;
for (destl = 0; dest[destl] != '\0'; destl++)
;
for (srcl = 0; srcl < n && src[srcl] != '\0'; srcl++)
dest[destl + srcl] = src[srcl];
return (dest);
}
