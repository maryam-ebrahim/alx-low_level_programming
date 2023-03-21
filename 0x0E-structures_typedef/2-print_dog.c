#include "dog.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_dog - Prints all the data of a dog.
 * @d: A dog structure.
 *
 * Return: Nothing.
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", (d->name) ? d->name : "(nill)");
		printf("Age: %f\n", (d->age) ? d->age : 0);
		printf("Owner: %s\n", (d->owner) ? d->owner : "(nill)");
	}
}
