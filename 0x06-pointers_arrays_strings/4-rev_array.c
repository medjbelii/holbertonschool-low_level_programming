#include "holberton.h"
#include <stdio.h>
/**
 * reverse_array - concats two strings
 * @a: Dest
 * @n: src
 * Return: el jaw el kol
 */
void reverse_array(int *a, int n)
{
int x;
int y;
int z;
if (n % 2 != 0)
z = n + 1;
else
z = n;
for (x = 0; x < z / 2; x++)
{
y = a[x];
a[x] = a[n - 1 - x];
a[n - 1 - x] = y;
}
}
