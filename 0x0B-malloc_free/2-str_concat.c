#include "holberton.h"
/**
* str_concat - creat
*
* @s1: creat
* @s2: creat
*
* Return: creat
*/

char *str_concat(char *s1, char *s2)
{

int s = 0;
int z = 0;
int x = 0;
char *r;

if (s1 != NULL)
{
while (s1[s] != '\0')
s++;
}

if (s2 != NULL)
{
while (s2[z] != '\0')
z++;
}

r = malloc(sizeof(char) * (s + z + 1));
if (r == NULL)
return (NULL);

for (x = 0; x < s; x++)
r[x] = s1[x];

for (x = 0; x < z; x++)
r[x + s] = s2[x];
r[s + z] = '\0';

return (r);
}
