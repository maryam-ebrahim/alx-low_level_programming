#include <stdio.h>

/**
 * main - A program to print all single digit numbers of base 10 start from 0
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int a;

	a = 0;

	while (a < 10)
	{
		printf("%d", a);
		a++;
	}
	putchar('\n');
	return (0);
}
