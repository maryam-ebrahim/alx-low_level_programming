#include <stdio.h>
#include "main.h"

/**
 * print_rev - A function that prints a string, in reverse
 * @s: the string to be printed
 * Return: 0 (success)
 */

void print_rev(char *s)
{
	int c;

	c = 0;

	while (s[c] != '\0')
	{
		c++;
	}

	for (c -= 1; c >= 0; c--)
	{
		_putchar(s[c]);
	}
	_putchar('\n');
}
