#include "main.h"
#include <stdio.h>

/**
 * _strcmp - A function that compares two strings
 * @s1: The first string to be compared.
 * @s2: The second string to be compared.
 * Return: negative if s1 < s2,
 * positive if s1 > s2,
 * 0 if s1 == s2.
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
