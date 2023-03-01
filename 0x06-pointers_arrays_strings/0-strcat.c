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
	int dlen, i;

	dlen = 0;

	while (dest[dlen])
	{
		dlen++;
	}

	for (i = 0; src[i] != 0; i++)
	{
		dest[dlen] = src[i];
		dlen++;
	}

	dest[dlen] = '\0';
	return (dest);
}
