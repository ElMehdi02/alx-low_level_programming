#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print-dog - prints dog's information
 * @d: struct dog to print the information of
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		d->name = "(nil)";
	id (d->owner == NULL)
		d->owner = "(nil)";

	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
