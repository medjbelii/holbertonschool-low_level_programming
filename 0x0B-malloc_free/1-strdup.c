#include "holberton.h"
/**
 * _strdup - dup
 *
 * @str: dup
 *
 * Return: dup
 */
char *_strdup(char *str)
{
	char *dpstr;
	unsigned int x, l = 0;

	if (str == NULL)
		return (NULL);
	while (str[l])
	l++;
	l++;
	dpstr = malloc(sizeof(char) * l);
	if (dpstr == NULL)
		return (NULL);
	for (x = 0; x < l; x++)
	dpstr[x] = str[x];
	dpstr[x] = '\0';
	return (dpstr);
}
