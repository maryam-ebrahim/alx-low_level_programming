#include <stdio.h>
#include "main.h"

/**
 * _strlen_recursion - A function that returns the length of a string.
 * @s: The string to be treated.
 * Return: The length of a string.
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}

/**
 * comparator - A function that compares each character of the string.
 * @s: The string to be treated.
 * @n1: Smallest iterator.
 * @n2: Biggest iterator.
 * Return: Interger.
 */

int comparator(char *s, int n1, int n2)
{
	if (*(s + n1) == *(s + n2))
	{
		if (n1 == n2 || n1 == n2 + 1)
		{
			return (1);
		}
		return (0 + comparator(s, n1 + 1, n2 - 1));
	}
	return (0);
}

/**
 * is_palindrome - A function that returns 1 if a string is a palindrome
 * and 0 if not.
 * @s: The string to be treated.
 * Return: 1 if s is palindrome, 0 if not.
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
	{
		return (1);
	}
	return (comparator(s, 0, _strlen_recursion(s) - 1));
}
