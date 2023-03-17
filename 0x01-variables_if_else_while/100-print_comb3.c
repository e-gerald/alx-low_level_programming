#include<stdio.h>

/**
 * main - Print 2 digit combinations
 * Return: double combination
*/

int main(void)
{
	int i, m;

	for (i = '0'; i <= '9'; i++)
	{
	for (m = '0'; m <= '9'; m++)
	{
		if (m == '2' && i == '0')
		{
			i = ' ';
			m = ' ';
			break;
		}
		putchar(i);
		putchar(m);
		putchar(',');
		putchar(' ');

	}
}	
	putchar('\n');
	return (0);
}
