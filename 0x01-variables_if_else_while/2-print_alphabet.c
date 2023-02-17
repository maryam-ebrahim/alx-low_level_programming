#include <stdio.h>

/**
 * main - A program that prints the alphabet in lowercase
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char c;

	c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	char C;

	C = 'A';

	while (C <= 'Z')
	{
		putchar(C);
		C++;
	}
	putchar('\n');
	return (0);
}
