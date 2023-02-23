#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * more_numbers - A function that prints 10 times the numbers, from 0 to 14
 *
 * Return: 0 (success)
 */

void more_numbers(void)
{
	int i;
	int n;

	for (n = 0; n < 10; n++)
	{
		for (i = 0; i < 15; i++)
		{
			if (i >= 10)
			{
				_putchar((i /10) + '0');
			}
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}
