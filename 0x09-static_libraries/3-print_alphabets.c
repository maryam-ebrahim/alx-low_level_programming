#include <stdio.h>

/**
 * main - A program tp print the alphabet in lowercase, and then in uppercase
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char c;
	char upper;

	c  = 'a';
	upper = 'A';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	while (upper <= 'Z')
	{
		putchar(upper);
		upper++;
	}
	putchar('\n');
	return (0);
}
