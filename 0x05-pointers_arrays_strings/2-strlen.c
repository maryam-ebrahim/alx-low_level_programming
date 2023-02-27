#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strlen - A function that returns the length of a string
 * @s: the string
 * Return: the length of *str
 */
int _strlen(char *s)
{
	size_t length = 0;
	while (*s)
	{
		length++;
	}
	return (length);
}
