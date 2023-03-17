#include<stdio.h>
#include<ctype.h>

/**
 * main - Print Hex digits
 * Return: Display base 16 decimals
*/

int main(void)
{
	int i;

	for (i = 0; i <= 23; i++)
	{
		if (i <= 9 || i >= 17)
			putchar(tolower(i + '0'));
	}
	putchar('\n');
	return  (0);
}
