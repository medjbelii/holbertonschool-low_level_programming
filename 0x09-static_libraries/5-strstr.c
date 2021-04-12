#include "holberton.h"
/**
* _strstr - str
* @haystack: string
* @needle: needle
* Return: ptr
*/

char *_strstr(char *haystack, char *needle)
{
	unsigned int x = 0, y;
	int z = 0;
	char *res;

	while (haystack[x])
	{
		if (needle[0] == '\0')
		{
			return (haystack);
		}
		if (needle[0] == haystack[x])
		{
			z = 1;
			res = &haystack[x];
			y = 0;
			while (needle[y] && haystack[x])
			{
				if (needle[y] == haystack[x])
				{
					z = 1;
					x++;
					y++;
				}
				else
				{
					z = 0;
					break;
				}
			}
			if (z == 1)
			{
				return (res);
			}
		}
		x++;
	}
	return (0);
}
