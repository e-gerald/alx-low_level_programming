#include<stdio.h>

/**
 * main - Prints base 10 numbers
 *
 * Return: 10 numbers
*/

int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
