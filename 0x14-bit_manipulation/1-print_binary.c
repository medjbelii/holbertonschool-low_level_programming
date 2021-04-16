#include "holberton.h"
/**
* print_binary - conv
*
* @n: conv
*
* Return: conv
*/
void print_binary(unsigned long int n)
{
unsigned long int x;
unsigned long int res = n, rv = 0;

if (n == 0)
{
_putchar('0');
return;
}

while (res > 0)
{
rv <<= 1;
if ((res & 1) == 1)
rv ^= 1;
res >>= 1;
}

while (n > 0)
{
x = 1 & rv;
rv = rv >> 1;
n = n >> 1;
_putchar(x + '0');
}
}
