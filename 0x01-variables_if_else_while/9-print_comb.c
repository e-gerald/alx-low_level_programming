#include<stdio.h>

/**
 * main - Combination of single numbers
 * Return: signle numbers and comma
*/

int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
