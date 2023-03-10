#include <stdio.h>
#include "main.h"

int _sqrt(int num, int root);

int _sqrt_recursion(int n);

/**
 * _sqrt - Calculates natural square root.
 * @num: Number to calculate the square root.
 * @root: Iterate number.
 * Return: The natural square root.
 */

int _sqrt(int num, int root)
{
	if ((root * root) == num)
	{
		return (root);
	}
	if (root == num / 2)
	{
		return (-1);
	}
	return (_sqrt(num, root + 1));
}

/**
 * _sqrt_recursion - A function that returns the natural square root of a num.
 * @n: The number to be treated.
 * Return: -1 if n does not have a natural square root.
 */

int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}
	return (_sqrt(n, root));
}
