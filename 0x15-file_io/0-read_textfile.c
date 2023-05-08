#include "main.h"

/**
 * read_textfile - Read a testfile and prints to STDOUT_FILENO
 * @filename: Name of file to read from
 * @letters: Number of text read on a file
 * Return: Size of the characters in a file
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t i, j, k;
	char *fd;

	i = open(filename, O_RDONLY);
	if (i == -1)
		return (0);
	fd = malloc(sizeof(char) * letters);
	k = read(i, fd, letters);
	j = write(STDOUT_FILENO, fd, k);
	free(fd);
	close(i);
	return (j);
}
