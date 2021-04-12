#include "holberton.h"
#include <stdio.h>
/**
 * _strstr - occurence
 * @haystack: str 1
 * @needle: str 2
 * Return: 0
 */
char *_strstr(char *haystack, char *needle)
{
	int x, y, z;

	y = 0;
	if (needle[0] == '\0')
	return (haystack);
	for (z = 0; needle[z]; z++)
	;
	for (x = 0; haystack[x]; x++)
	{
		if (needle[0] == haystack[x])
		{
			for (y = 0; needle[y]; y++)
			{
				if (needle[y] != haystack[x + y])
				{
					break;
				}
			}
		}
		if (y == z)
		return (&haystack[x]);
	}
return (0);
}
