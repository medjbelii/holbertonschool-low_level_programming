#include "holberton.h"
/**
* cap_string - concats two strings
* @s: Dest
* Return: string
*/
char *cap_string(char *s)
{
	int length = 0;
	int x;

	while (s[length] != '\0')
	{
		length++;
	}
	for (x = 0; s[x] != '\0'; x++)
	{
		if (x == 0)
		{
			if (s[x] >= 97 && s[x] <= 122)
			{
				s[x] -= 32;
			}
		}
		if (s[x] == '\n' || s[x] == '\t' || s[x] == ' ' || s[x] == '.'
		|| s[x] == ';' || s[x] == ',' || s[x] == '!' || s[x] == '?'
		|| s[x] == '"' || s[x] == '(' || s[x] == ')' || s[x] == '{'
		|| s[x] == '}')
		{
			if (s[x + 1] >= 97 && s[x + 1] <= 122)
			s[x + 1] -= 32;
		}
	}
	return (s);
}
