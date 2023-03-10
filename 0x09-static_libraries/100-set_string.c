#include <stdio.h>
#include "main.h"

/**
 * set_string - A function that sets the value of a pointer to a char.
 * @s: Input character.
 * @to: Input character
 * Return: 0 (success).
 */

void set_string(char **s, char *to)
{
	*s = to;
}
