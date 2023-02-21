#include <stdio.h>
#include "main.h"

/**
 * _islower - A function that checks for lowercase character
 * @c: the character to be checked
 * Return: 1 if success , 0 if anything else
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
