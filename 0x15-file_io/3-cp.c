#include "main.h"

/**
 * create_buff - A buffer to store new value
 * @fd: File destination
 * Return: Characters
 */

char *create_buff(char *fd)
{
	char *buff;

	buff = malloc(sizeof(char) * 1024);
	if (buff == NULL)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", fd);
		exit(99);
	}
	return (buff);
}

/**
 * close_file - Close file function
 * @fd: Function document
 */

void close_file(int fd)
{
	int i;

	i = close(fd);
	if (i == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}


/**
 * main - Copy content from one file to another file
 * @argc: Argument count
 * @argv: Argument vector
 * Return: Copied file
 */

int main(int argc, char *argv[])
{
	int north, south, i, j;
	char *buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buff = create_buff(argv[2]);
	north = open(argv[1], O_RDONLY);
	i = read(north, buff, 1024);
	south = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (north == -1 || i == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't read from file %s\n", argv[1]);
			free(buff);
			exit(98);
		}
		j = write(south, buff, i);
		if (south == -1 || j == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't write to %s\n", argv[2]);
			free(buff);
			exit(99);
		}
		i = read(north, buff, 1024);
		south = open(argv[2], O_WRONLY | O_APPEND);
	} while (i > 0);
	free(buff);
	close_file(north);
	close_file(south);
	return (0);
}
