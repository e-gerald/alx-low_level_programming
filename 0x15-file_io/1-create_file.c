#include "main.h"

/**
 * create_file - Create a function that creates a file
 * @filename: Name of the target file
 * @text_content: Content
 * Return: Number of files created
 */

int create_file(const char *filename, char *text_content)
{
	int i, j, count = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (count = 0; text_content[count]; )
			count++;
	}
	i = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	j = write(i, text_content, count);
	if (i == -1 || j == -1)
		return (-1);
	close(i);
	return (1);
}
