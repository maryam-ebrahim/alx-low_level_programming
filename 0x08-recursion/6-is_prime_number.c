#include <stdio.h>
#include "main.h"

int check_prime(int num, int i);

/**
 * is_prime_number - function that returns 1 if the input integer is a prime
 * number, otherwise return 0.
 * @n: The number to be returned.
 * Return: 1 if n is prime num, otherwise 0.
 */

int is_prime_number(int n)
{
	return (check_prime(n, 1));
}

/**
 * check_prime - Checks if a number is divisible (prime).
 * @num: The number to be checked.
 * @i: The iteration times..
 * Return: 0 if the number is composite,
 * 1 if the number is prime.
 */

int check_prime(int num, int i)
{
	if (num <= 1)
	{
		return (0);
	}
	if (num % i == 0 && i > 1)
	{
		return (0);
	}
	if ((num / i) < i)
	{
		return (1);
	}
	return (check_prime(num, i + 1));
}
