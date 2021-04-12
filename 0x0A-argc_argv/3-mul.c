#include <stdio.h>
#include <stdlib.h>
/**
 * main - disploy
 * @argc: var
 * @argv: str
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int x, m = 1, array;

	if (argc > 2)
	{
		for (x = 1; x < argc; x++)
		{
			array = atoi(argv[x]);
			m *= array;
		}
		printf("%d\n", m);
	}
	else
	printf("Error\n");
	return (0);
}
