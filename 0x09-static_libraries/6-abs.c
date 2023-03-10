#include "main.h"

/**
 * _abs - A function that computes the absolute value of an integer
 * @i: the number to be computed
 * Return: the absolute value if true , the value if false
 */

int _abs(int i)
{
	if (i < 0)
	{
		int abs_val;

		abs_val = i * -1;
		return (abs_val);
	}
	else
	{
		return (i);
	}
}
