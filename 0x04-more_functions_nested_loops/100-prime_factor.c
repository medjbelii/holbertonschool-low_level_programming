#include <stdio.h>
/**
 * main - most factor
 *
 * Return: 0
 */
int main(void)
{
	long num = 612852475143;
	long i;

	for (i = 2; i <= num; i++)
	{
		if (num % i == 0)
		{
			while (num % i == 0)
			num = num / i;
		}
	}
	printf("%ld\n", i - 1);
	return (0);
}
