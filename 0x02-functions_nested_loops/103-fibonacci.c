#include <stdio.h>
/**
  * main - sum
  *
  * Return: 1
  */
int main(void)
{
	unsigned long cnt, x, y, z, sum;

	x = sum = 0;
	y = 1;
	for (cnt = 0; cnt < 50; cnt++)
	{
		z = x + y;
		x = y;
		y = z;
		if (z % 2 == 0 && z < 4000000)
		{
			sum += z;
		}
	}
	printf("%lu\n", sum);
	return (0);
}
