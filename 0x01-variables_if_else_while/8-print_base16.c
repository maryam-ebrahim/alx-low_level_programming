#include <stdio.h>

/**
 * main - A program that prints all numbers of base 16 in lowercase(hexa)
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int a;
	char c;

	a = 0;
	c = 'a';

	while (a < 10)
	{
		putchar(a + '0');
		a++;
	}
	while (c <= 'f')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
