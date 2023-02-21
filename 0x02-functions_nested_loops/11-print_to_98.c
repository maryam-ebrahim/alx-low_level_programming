#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - A function that prints all natural numbers from n to 98
 * @n: the starting number
 * Return: natural numbers
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
	for (; n <= 98; n++)
	{
	if (n == 98)
	{
	_putchar(n + '0');
	_putchar('\n');
	break;
	}
	else
	{
	printf("%d, ", n);
	}
	}
	}
	else
	{
	for (; n >= 98; n--)
	{
	if (n == 98)
	{
	_putchar(n + '0');
	_putchar('\n');
	break;
	}
	else
	{
	printf("%d, ", n);
	}
	}
	}
}
