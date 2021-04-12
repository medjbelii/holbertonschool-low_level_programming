#include <stdio.h>

int main(void)
{
	int x;
	int y[5];
	int *p;

	y[2] = 1024;
	p = &x;
	*(p + 5) = 98;
	printf("y[2] = %d\n", y[2]);
	return (0);
}
