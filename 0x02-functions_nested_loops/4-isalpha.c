#include "holberton.h"
/**
 * _islower - checks if caracter is lowercase
 * Return: 1 if c is a lower or upper case letter otherwise Return: 0
 * @c: caracter to run the checker on
 **/

int _isalpha(int c)
{
if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && ((c <= 'Z')))
return (1);
else
return (0);
}
