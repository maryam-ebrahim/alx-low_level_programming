#include <stdio.h>
#include "main.h"

/**
 * factorial - A function that returns the factorial of a given number.
 * @n: The number to be returned.
 * Return: -1 if n < 0 to indicate an error.
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n <= 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
