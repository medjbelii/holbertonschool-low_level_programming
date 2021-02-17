#include "holberton.h"
/**
 * print_square- print squares
 * @n: integer
 * Return : diagonals
 */

void print_square(int size)
{
int i;
int j;
if (size > 0)
{
for (i = 0; i < size ; i++)
{
for (j = 1; j < size ; j++)
{
_putchar('#');
}
_putchar('#');
_putchar('\n');
}
}
else
_putchar('\n');
}
