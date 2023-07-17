#include "dog.h"

/**
 * init_dog - gic constructor
 * @d: ptr
 * @name: name
 * @age: age
 * @owner: name of the owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
