#include "holberton.h"

/**
 * _strlen - len
 * @str: string
 * Return: len
 */

int _strlen(char *str)
{
	if (*str == '\0')
		return (0);
	else
		return (1 + _strlen(str + 1));
}
/**
 * palin - palindrome
 * @l: ind
 * @r: ind
 * @p: str
 * Return: 1
 */
int palin(int l, int r, char *p)
{
	if (l >= r)
		return (1);
	else if (p[l] != p[r])
		return (0);
	else
		return (palin(l + 1, r - 1, p));
}

/**
 * is_palindrome - prints 1
 * @s: string
 * Return: 1
 */

int is_palindrome(char *s)
{
	int i;

	i = _strlen(s) - 1;
	return (palin(0, i, s));
}
