#include <stdio.h>
#include "main.h"

/**
 * _pow_recursion - A function that returns the value of x
 * raised to the power of y.
 * @x: The value to be returned.
 * @y: The power of y.
 * Return: -1 if y < 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
