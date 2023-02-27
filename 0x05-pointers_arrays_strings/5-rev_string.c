#include <stdio.h>
#include "main.h"

/**
 * rev_string - A function that reverses a string
 * @s: the string to be reversed
 * Return: 0 (success)
 */

void rev_string(char *s)
{
	int len, index;
	char tmp;

	len = 0;
	index = 0;

	while (s[index++])
	{
		len++;
	}

	for (index = len - 1; index >= len / 2; index--)
	{
		tmp = s[index];
		s[index] = s[len - index - 1];
		s[len - index - 1] = tmp;
	}
}
