#include "holberton.h"
/**
 * create_file - creat
 *
 * @filename: file
 * @text_content: write
 *
 * Return: creat
 */
int create_file(const char *filename, char *text_content)
{
	int x, y, z;

	if (filename == NULL)
		return (-1);

	x = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (x == -1)
		return (-1);
	if (text_content == NULL)
		return (1);
	for (z = 0 ; text_content[z] != '\0' ; z++)
		;
	y = write(x, text_content, z);
	if (y == -1)
		return (-1);
	return (1);
}
