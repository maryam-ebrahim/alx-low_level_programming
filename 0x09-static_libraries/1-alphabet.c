#include "main.h"

/**
 * print_alphabet - A function to print the alphabet in lowercase
 *
 * Return: 0 (success)
 */

void print_alphabet(void)
{
	char c;

	c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
