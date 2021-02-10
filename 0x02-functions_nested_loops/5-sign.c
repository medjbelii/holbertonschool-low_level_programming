#include "holberton"
/**
 * print_sign - of a number n
 * Return: 0 or 1
 * @n: print the signe of a number
 **/

int print_sign(int n)
{
if (n > 0)
{
_putchar ('+');
return (1);
}
else if (n == 0)
{
_putchar ('0');
return (0);
}
else
{
_putchar ('-');
return (-1);
}
}
