#include<stdio.h>

/**
 * main - Print lower case char in reverse
 *
 * Return: Print char in reverse
 */

int main(void)
{
	int i;

	for (i = 'z'; i >= 'a'; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
