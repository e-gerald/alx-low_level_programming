#include <stdio.h>
#include <string.h>
/**
 * print_rev - Prints string in reverse
 * @s: String argument
 * Return: Always 0
 */

void print_rev(char *s)
{
	int i;

	for (i = strlen(s); i > 0; i--)
		printf("%c", s[i]);
	printf("\n");
}
