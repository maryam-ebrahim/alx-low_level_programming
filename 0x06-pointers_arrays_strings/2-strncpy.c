#include "main.h"
#include <stdio.h>

/**
 * _strncpy - A function that copies a string.
 * @dest: The destination value.
 * @src: The source value.
 * n: The number of bytes to be coppied from src.
 * Return: 0 (success).
 */

char *_strncpy(char *dest, char *src, int n)
{
	int index, src_len;

	index = 0;
	src_len = 0;

	while (src[index++])
	{
		src_len++;
	}
	for (index = 0; src[index] && index < n; index++)
	{
		dest[index] = src[index];
	}
	for (index = src_len; index < n; index++)
	{
		dest[index] = '\0';
	}
	return (dest);
}
