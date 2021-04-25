#include "holberton.h"
/**
 * read_textfile - Read
 *
 * @filename: file
 * @letters: letter
 *
 * Return: Read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int x;
	ssize_t size, size2;
	char *buff;

	buff = malloc(sizeof(char) * letters);

	if (filename == NULL)
		return (0);

	x = open(filename, O_RDONLY);
	if (x == -1)
		return (0);
	size = read(x, buff, letters);
	if (size == -1)
		return (0);

	*(buff + size) = '\0';

	size2 = write(STDOUT_FILENO, buff, size);
	if (size2 == -1 || size2 != size)
		return (0);
	close(x);
	return (size2);
}
