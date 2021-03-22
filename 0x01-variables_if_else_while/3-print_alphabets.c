#include <stdio.h>
/**
* main - print
* Return: 0
**/
int main(void)
{
	int a;
	int A;

	for (a = 97; a < 123; a++)
		putchar(a);
	for (A = 65; A < 91; A++)
		putchar(A);
	putchar('\n');
	return (0);
}
