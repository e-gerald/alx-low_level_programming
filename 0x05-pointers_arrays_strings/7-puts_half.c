#include <stdio.h>
#include <string.h>

/**
 * puts_half - Print half a string
 * @str: Argument
 * Return: Always 0
 */

void puts_half(char *str)
{
	int n, i;

	n = (strlen(str) - 1) / 2;
	for (i = 0; i <= n; i++)
	{
		if (n % 2 == 0 && n < 10)
			printf("%c", str[n + i + 1]);
		else if (i != 0)
			printf("%c", str[n + i]);
	}
	printf("\n");
}
