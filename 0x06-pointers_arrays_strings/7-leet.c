#include <unistd.h>
#include "holberton.h"
/**
* leet - concats two strings
* @s: Dest
* Return: s.
*/
char *leet(char *s)
{
	int x, y;
	char a[] = {'A', 'E', 'O', 'T', 'L'};
	char b[] = {'a', 'e', 'o', 't', 'l'};
	char c[] = {'4', '3', '0', '7', '1'};

	for (x = 0; s[x]; x++)
	{
		for (y = 0; y <= 5; y++)
		{
			if (s[x] == a[y] || s[x] == b[y])
			{
				s[x] = c[y];
				break;
			}
		}
	}
	return (s);
}
