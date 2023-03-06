#include <stdio.h>
#include "main.h"

/**
 * print_chessboard - A function that prints the chessboard.
 * @a: An array.
 * Return: 0 (success).
 */

void print_chessboard(char (*a)[8])
{
	int i, n;

	for (i = 0; i < 8; i++)
	{
		for (n = 0; n < 8; n++)
		{
			_putchar(a[i][n]);
		}
		_putchar('\n');
	}
}
