#include "holberton.h"
/**
 * print_triangle - triangle of #
 * @size: size
 * Return: 0
 */
void print_triangle(int size)
{
	int x, y, z;

	if (size <= 0)
		_putchar('\n');
	for (x = 0; x < size; x++)
	{
		for (y = 0; y < (size - (x + 1)); y++)
			_putchar(' ');
		for (z = 0; z < (x + 1); z++)
			_putchar('#');
		_putchar('\n');
	}
}
