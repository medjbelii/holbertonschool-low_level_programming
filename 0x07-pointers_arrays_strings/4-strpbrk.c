#include "holberton.h"
/**
* _strpbrk - 1st
* @s: string
* @accept: string
* Return: 0
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
