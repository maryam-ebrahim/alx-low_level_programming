#include <stdio.h>
#include "main.h"

int _sqrt(int n, int i);

/**
 * _sqrt_recursion - A function that returns the natural square root of a num.
 * @n: The number to be treated.
 * Return: -1 if n does not have a natural square root.
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - Calculates natural square root.
 * @n: Number to calculate the square root.
 * @i: Iterate number.
 * Return: The natural square root.
 */

int _sqrt(int n, int i)
{
	int sqrt = i * 1;

	if (sqrt > n)
	{
		return (-1);
	}
	if (sqrt == n)
	{
		return (i);
	}
	return (_sqrt(n, i + 1));
}
