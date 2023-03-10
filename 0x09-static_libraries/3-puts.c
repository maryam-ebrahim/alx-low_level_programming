#include "main.h"
#include <stdio.h>

/**
 * _puts - A function that prints a string
 * @str: the string to be printed
 * Return: 0 (success)
 */

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
