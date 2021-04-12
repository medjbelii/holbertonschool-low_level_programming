#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * main - disploy
 * @argc: var
 * @argv: str
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int x, y;
	int s = 0;

	for (x = 1; x < argc; x++)
	{
		for (y = 0; argv[x][y]; y++)
		{
			if (!(isdigit(argv[x][y])))
			{
				printf("Error\n");
				return (1);
			}
		}
		s += atoi(argv[x]);
	}
	printf("%d\n", s);
	return (0);
}
