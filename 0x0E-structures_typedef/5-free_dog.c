#include "dog.h"

/**
 * free_dog - free the struct
 * @d: dog ptr
 */
void free_dog(dog_t *d)
{
	if (!d)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
