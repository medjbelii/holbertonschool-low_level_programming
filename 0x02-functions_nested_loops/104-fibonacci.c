#include <stdio.h>
/**
  * main - print
  *
  * Return: 1
  */
int main(void)
{
	int count;
	unsigned long x, y, z;
	unsigned long a, b, c, all;

	count = 0;
	x = 0;
	y = 1;
	for (count = 1; count <= 91; count++)
	{
		z = x + y;
		x = y;
		y = z;
		printf("%lu, ", z);
	}
	a = x % 1000;
	x = x / 1000;
	b = y % 1000;
	y = y / 1000;
	while (count <= 98)
	{
		all = (a + b) / 1000;
		c = (a + b) - all * 1000;
		z = (x + y) + all;
		a = b;
		b = c;
		x = y;
		y = z;
		if (c >= 100)
			printf("%lu%lu", z, c);
		else
			printf("%lu0%lu", z, c);
		if (count != 98)
			printf(", ");
		count++;
	}
	putchar('\b');
	return (0);
}
