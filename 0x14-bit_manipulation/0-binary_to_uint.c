#include "holberton.h"
/**
* power - pow
*
* @a: 1
* @b: 2
*
* Return: res
*/
int power(int a, int b)
{
	int res = a;

	if (b == 0)
		return (1);
	for (; b > 1; b--)
		a *= res;
	return (a);
}
/**
* binary_to_uint - conv
*
* @b: conv
*
* Return: conv
*/
unsigned int binary_to_uint(const char *b)
{
	int l = 0, res = 0;
	int x, lf;

	if (b == NULL)
		return (0);
	while (b[l])
		l++;
	l--;
	lf = l;
	for (x = 0; x <= lf; x++)
	{
		if (b[x] != '1' && b[x] != '0')
			return (0);
		if (b[x] == '1')
			res += power(2, l);
		l--;
	}
	return (res);
}
