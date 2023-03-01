#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcat - A function that concatenates two strings.
 * @dest: The destination value.
 * @src: The source value.
 * Return: A pointer to the resulting string dest.
 */

char *_strcat(char *dest, char *src)
{       
	int index, dest_len;

	index = 0;
	dest_len = 0;

	while (dest[index++])
	{
		dest_len++;
	}
	for (index = 0; src[index] && index < n; index++)
	{
		dest[dest_len++] = src[index];
	}
	return (dest);
}
