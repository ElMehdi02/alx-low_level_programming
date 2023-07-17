#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - a functions that frees a dog
 * @d: the dog
 */

void free_dog(dog_t *d)
{
	if (!d)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
