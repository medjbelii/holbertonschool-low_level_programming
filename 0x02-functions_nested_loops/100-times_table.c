#include "holberton.h"
/**
 * print_times_table - times table n
 * @n: var
 * return: table
 */
void print_times_table(int n)
	{
	if ((n < 15) && (n >= 0))
	{
		int i, u, k;

		for (u = 0; u <= n; u++)
		{
			for (i = 0; i <= n; i++)
			{
				k = (i * u);
				if (k > 9 && k < 100)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar((k / 10) + '0');
					_putchar((k % 10) + '0');
				}
				else if (k <= 9 && i != 0)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(k + '0');
				}
				else if (k > 99)
				{
					_putchar(' ');
					_putchar((k / 100) + '0');
					_putchar(((k / 10) % 10) + '0');
					_putchar((k % 10) + '0');
				}
				else
				{
					_putchar(k + '0');
				}
				if (i != n)
				_putchar(',');
			}
			_putchar('\n');
		}
	}
}
