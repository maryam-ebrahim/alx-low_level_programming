#include "main.h"

/**
 * _memcpy - A function that copies memory area.
 * @n: The number of bytes to be copied.
 * @src: The source memory.
 * @dest: The destination memory.
 * Return: A pointer to dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
