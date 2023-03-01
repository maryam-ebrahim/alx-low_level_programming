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
	strcat(dest, src);
	return (dest);
}
