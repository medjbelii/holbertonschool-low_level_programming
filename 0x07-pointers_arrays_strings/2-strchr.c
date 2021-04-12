#include "holberton.h"
#include <stdlib.h>
/**
 * _strchr - string search
 * @s: char 1
 * @c: char 2
 * Return: Null
 */
char *_strchr(char *s, char c)
{
	int x = 0;

	while (s[x] >= '\0')
	{
		if (s[x] == c)
		return (&s[x]);
		x++;
	}
	return (NULL);
}
