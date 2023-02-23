#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_numbers - A function that prints the numbers, from 0 to 9
 * @n: the numbers to be printed
 * Return: 0 (success)
 */

void print_numbers(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
