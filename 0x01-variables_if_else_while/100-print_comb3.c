#include<stdio.h>

/**
 * main - Print 2 digit combinations
 * Return: double combination
*/

int main(void)
{
	int i, m;

	for (i = 0; i < 10; i++)
	{
	for (m = 0; m < 10 ; m++)
	{
		if (i < m && i != m)
		{
			putchar(i + '0');
			putchar(m + '0');
			if (i + m != 17)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
	}
}
