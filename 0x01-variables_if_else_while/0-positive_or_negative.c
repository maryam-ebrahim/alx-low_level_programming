#include <stdio.h>

/**
 * main - A program to assign a random number to a variable
 *
 * return: 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand; - RAND_MAX/2;
	if (n > 0)
	{
		printf(n %d, "is positive"\n);
	}
	else if (n == 0)
	{
		printf(n %d, "is zero"\n);
	}
	else
	{
		printf(n %d, "is negative"\n);
	}
	return (0);
}
