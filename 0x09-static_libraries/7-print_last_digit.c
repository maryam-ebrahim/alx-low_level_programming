#include "main.h"

/**
 * print_last_digit - A function that prints the last digit of a number
 * @n: the number to be treated
 * Return: the value of the last digit
 */

int print_last_digit(int n)
{
	int lastDigit;

	lastDigit = n % 10;

	if (lastDigit < 0)
	{
		lastDigit = lastDigit * -1;
	}
	_putchar(lastDigit + '0');
	return (lastDigit);
}
