#include "holberton.h"
/**
 * print_square- integer that determines the demntions of the square
 * @size: integer that determines the demntions of the square
 * Return: square
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
