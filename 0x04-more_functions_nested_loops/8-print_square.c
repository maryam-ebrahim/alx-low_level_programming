#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_square - A function that prints a square
 * @size: the size of the square
 * Return: 0 (success)
 */

void print_square(int size)
{
	int x;
	int y;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < size; x++)
		{
			for (y = 0; y < size; y++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
