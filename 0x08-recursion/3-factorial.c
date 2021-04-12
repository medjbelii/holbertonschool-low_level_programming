#include "holberton.h"
/**
 * factorial - puts
 * @n: var
 * Return: a
 */
int factorial(int n)
{
	if (n < 0)
	return (-1);
	else if (n <= 1)
	return (1);
	n = n * factorial(n - 1);
	return (n);
}
