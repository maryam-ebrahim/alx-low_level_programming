#include "main.h"

/**
 * print_alphabet_x10 - A function to print the alphabet 10x
 *
 * Return: 0 (success)
 */

void print_alphabet_x10(void)
{
	char c;
	int j;

	c = 'a';
	j = 0;
	while (j < 10)
	{
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}

		_putchar('\n');
		j++;
	}
}
