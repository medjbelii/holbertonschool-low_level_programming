#include "holberton.h"

/**
 * _atoi - str
 * @s: string to convert
 *
 * Return: value
 */

int _atoi(char *s)
{
	int x, y, sign = 1;

	x = y = 0;
	while ((*(s + x) < '0' || *(s + x) > '9') && (*(s + x) != '\0'))
	{
		if (*(s + x) == '-')
			sign *= -1;
		x++;
	}
	while ((*(s + x) >= '0') && (*(s + x) <= '9'))
	{
		y = y * 10 + sign * (*(s + x) - '0');
		x++;
	}
	return (y);
}
