#include <unistd.h>
#include "holberton.h"
/**
* string_toupper - concats two strings
* @s: Dest
* Return: s.
*/
char *string_toupper(char *s)
{
	int i = 0, j;

	while (s[i])
	i++;
	
	for (j = 0; j < i; j++)
	{
		if (s[j] >= 97 && s[j] <= 122)
		s[j] -= 32;
	}
	return (s);
}
