#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - A program to print the last digit of a number stored in a variable
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int n;
	int lastDgt;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDgt = n % 10;
	if (lastDgt > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastDgt);
	}
	else if (lastDgt < 6 && lastDgt != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastDgt);
	}
	else
	{
		printf("Last digit of %d is 0 and is 0\n", n);
	}
	return (0);
}
