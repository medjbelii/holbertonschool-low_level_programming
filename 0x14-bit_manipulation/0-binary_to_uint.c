#include "holberton.h"

/**
* _pow - x ^ y
* @x: num 1
* @y: num 2
* Return: x ^ y =
*/
int _pow(int x, int y)
{
int z = x;
if (y == 0)
return (1);

for (; y > 1; y--)
x *= z;
return (x);
}

/**
* binary_to_uint - bnary to unsigned
* @b: pointer
* Return: Z
*/
unsigned int binary_to_uint(const char *b)
{
int lengh = 0, z = 0;
int x, lengh2;

if (b == NULL)
return (0);


while (b[lengh])
lengh++;
lengh--;

lengh2 = lengh;
for (x = 0; x <= lengh2; x++)
{
if (b[x] != '1' && b[x] != '0')
return (0);
if (b[x] == '1')
z += _pow(2, lengh);
lengh--;
}

return (z);
}