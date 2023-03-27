#include <stdio.h>
#include <string.h>

/**
 * puts2 - Print even string
 * @str: Argument
 * Return: Always 0
 */

void puts2(char *str)
{
	int i;

	for (i = 0; i < strlen(str) - 1; i++)
	{
		if (str[i] % 2 == 0)
			printf("%c", str[i]);
	}
	printf("\n");
}
