#include <stdio.h>
#include "main.h"

/**
 * _isalpha -  A function that checks for alphabetic character
 * @c: the character to be checked
 * Return: 1 for uppercase or lowercase , 0 for otherwise
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
