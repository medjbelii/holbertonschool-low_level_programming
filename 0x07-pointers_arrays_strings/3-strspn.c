#include "holberton.h"
/**
 * _strspn - len
 * @s: string
 * @accept: char
 * Return: nbr of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	int x, y, byte = 0, temp;

	if (!s || !accept)
	return (0);
	for (x = 0; s[x] != '\0'; x++)
	{
		temp = byte;
		for (y = 0; accept[y] != '\0'; y++)
		{
			if (s[x] == accept[y])
			byte++;
		}
		if (temp == byte)
		return (temp);
	}
	return (byte);
}
