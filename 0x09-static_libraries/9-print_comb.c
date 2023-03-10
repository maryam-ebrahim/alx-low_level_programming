#include <stdio.h>

/**
 * main - A program to print all possible combinations of single-digit numbers
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int a;

	a = 0;

	while (a < 10)
	{
		putchar(a + '0');
		if (a < 9)
		{
			putchar(',');
			putchar(' ');
		}
		a++;
	}
	putchar('\n');
	return (0);
}
