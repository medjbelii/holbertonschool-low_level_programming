#include "holberton.h"
/**
 * dividable - test
 * @n: var
 * @div: divider
 * Return: 1
 */
int dividable(int n, int div)
{
	if (n % div == 0)
		return (0);
	if (div == n / 2)
		return (1);
	return (dividable(n, div + 1));
}

/**
 * is_prime_number - test
 * @n: var
 * Return: 1
 */
int is_prime_number(int n)
{
	int d = 2;

	if (n <= 1)
		return (0);
	if (n >= 2 && n <= 3)
		return (1);
	return (dividable(n, d));
}
