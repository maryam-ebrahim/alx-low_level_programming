#include <stdio.h>
#include "main.h"

/**
 * *_strcpy - A function copy the string to the buffer
 * @dest: destenation value
 * @src: source value
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i++] = '\0';
	return (dest);
}
