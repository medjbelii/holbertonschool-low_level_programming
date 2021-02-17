#include "holberton.h"
/**
* more_numbers- prints
* Return: 0
**/
void more_numbers(void)
{
	int i, k;

	for (k = 0; k < 10; k++)
	{
		for (p = 0; p <= 14; p++)
		{
			if (i >= 10)
			{
				_putchar(i / 10 + '0');
			}
			_putchar(i % 10 + '0');
		}
		_putchar('\n');
	}
}
