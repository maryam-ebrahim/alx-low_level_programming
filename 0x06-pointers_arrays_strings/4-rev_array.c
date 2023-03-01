#include "main.h"
#include <stdio.h>

/**
 * reverse_array - A function that reverses the content of an array of integers
 * @a: The array of integers to be reversed.
 * @n: The number of elements of the array.
 * Return: 0 (success).
 */

void reverse_array(int *a, int n)
{
	int tmp, index;

	for (index = n - 1; index >= n / 2; index--)
	{
		tmp = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = tmp;
	}
}
