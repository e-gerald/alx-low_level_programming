#include<stdio.h>
#include<ctype.h>

/**
 * main - Prints lower and upper case characters
 * Return: Outputs characters
 */

int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
		putchar(i);
	for (i = 'a'; i <= 'z'; i++)
		putchar(toupper(i));
	putchar('\n');
	return (0);
}
