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

	for (n = 0; n < 10; n++)
	{
		_putchar(n + '0');
	}
	_putchar('\n');
}
