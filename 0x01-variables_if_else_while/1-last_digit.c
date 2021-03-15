#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - last digit
 * @a - int random digit
 * @L - int last digit
 * Return: 0
 **/
int main(void)
{
	int a;
	int L;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	L = a % 10;
	if (L > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", a, L);
	}
	else if (L == 0)
	{
		printf("Last digit of %d is %d and is 0\n", a, L);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", a, L);
	}
	return (0);
	}