#include <stdio.h>

/**
 * main - A program tp print the alphabet in lowercase, and then in uppercase
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	while (c <= 'z')
	{
		putchar(toupper(c));
		c++;
	}
	putchar('\n');
	return (0);
}
