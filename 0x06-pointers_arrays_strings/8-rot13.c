#include <unistd.h>
#include "holberton.h"
/**
* rot13 - Rot encoder
* @s: Dest
* Return: encoded res
*/
char *rot13(char *s)
{
int x, y;
char a[] = "abcdefghijklmABCDEFGHIJKLMnopqrstuvwxyzNOPQRSTUVWXYZ";
char b[] = "nopqrstuvwxyzNOPQRSTUVWXYZabcdefghijklmABCDEFGHIJKLM";
for (x = 0; s[x]; x++)
{
for (y = 0; a[y]; y++)
{
if (s[x] == a[y])
{
s[x] = b[y];
break;
}
}
}
return (s);
}
