#include "holberton.h"
#include <stdio.h>
/**
* _strpbrk - str
* @s: mem
*
* @accept: src
*
* Return: res
*/

char *_strpbrk(char *s, char *accept)
{
	int x, y;
	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; accept[y]; y++)
		{
			if (s[x] == accept[y])
			return (&(s[x]));
		}
	}
	return (0);
}
