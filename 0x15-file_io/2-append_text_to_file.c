#include "main.h"

/**
 * append_text_to_file - A function that append text to a target file
 * @filename: Name of input file
 * @text_content: Content getting appended
 * Return: Appended file and count
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int i, j, count = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (count = 0; text_content[count];)
			count++;
	}
	i = open(filename, O_WRONLY | O_APPEND);
	j = write(i, text_content, count);
	if (i == -1 || j == -1)
		return (-1);
	close(i);
	return (1);
}
