#include <stdio.h>
/**
* main - last digit
* Return: 0
**/
int main(void)
{
	int a;
	int b;

	for (a = '0'; a <= '9'; a++)
		putchar(a);
	for (b = 'a'; b < 'g'; b++)
		putchar(b);
	putchar('\n');
	return (0);
}
