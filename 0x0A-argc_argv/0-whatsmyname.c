#include <stdio.h>
/**
 * main - disploy
 * @argc: var
 * @argv: str
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
	printf("%s\n", argv[x]);
	return (0);
}
