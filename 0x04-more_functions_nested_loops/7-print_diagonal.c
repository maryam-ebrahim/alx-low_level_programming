#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_diagonal - A function that draws a diagonal line on the terminal
 * @n: the number of times the character \ should be printed
 * Return: 0 (success)
 */

void print_diagonal(int n)
{
	int i;
	int j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (j == i)
				{
					_putchar('\\');
				}
				else if (j < i)
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
