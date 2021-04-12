#include "holberton.h"
/**
* print_number - n bytes of str
* @n: Dest
* Return: none
*/
void print_number(int n)
{
	int Dv = 1,  L = n, Res;
	if (L < 0)
	{
		L = -L;
		_putchar('-');
	}
	if (L < 9) 
	Dv = 0;
	Res = L % 10;
	L = L / 10;
	int m = L;
	while (L >= 10)
	{
		Dv *= 10;
		L /= 10;
	}
	for (; Dv != 0; Dv /= 10)
	{
		_putchar(m / Dv + '0');
		m %= Dv;
	}
	_putchar(Res + '0');
}
