#include "holberton.h"
#include <stdio.h>
/**
 * _strcmp - concats two strings
 * @s1: Dest
 * @s2: src
 * Return: el jaw el kol
 */
int _strcmp(char *s1, char *s2)
{
int i;
int j;
for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
{
if (s1[i] != s2[i])
{
j = s1[i] - s2[i];
s1[i + 1] = '\0';
}
else
j = 0;
}
return (j);
}
