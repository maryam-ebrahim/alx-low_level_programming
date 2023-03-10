#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_line - A function that draws a straight line in the terminal
 * @n: the number of times the character _ should be printed
 * Return: 0 (success)
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
