#include "main.h"
#include <stdio.h>

/**
 * main - A program that prints the number of arguments passed into it.
 * @argc: argument count.
 * @argv: argument vector.
 *
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%i\n", argc - 1);
	return (0);
}
