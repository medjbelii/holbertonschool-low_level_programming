#include "holberton.h"
/**
 * _print_rev_recursion - puts
 * @s: str
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
