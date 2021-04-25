#include "holberton.h"
/**
 * string_nconcat - concat
 *
 * @s1: concat
 * @s2: concat
 * @n: concat
 *
 * Return: concat
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *dst;
	unsigned int x = 0, y = 0, z = 0, res = 0;

	if (s1 != NULL)
	{
		while (s1[x])
			x++;
	}

	if (s2 != NULL)
	{
		while (s2[y])
			y++;
	}
	res = y - n;
	if (n >= y)
	{
		res = 0;
	}
	dst = malloc(((x + y + 1) - res) * sizeof(char));
	if (dst == NULL)
		return (NULL);
	while (z < ((x + y) - res))
	{
		if (z < x)
		{
			dst[z] = s1[z];
			z++;
		}
		else
		{
			dst[z] = s2[z - x];
			z++;
		}
	}
	dst[z] = '\0';
	return (dst);
}
