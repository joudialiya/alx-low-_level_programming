#include "dog.h"

/**
 * print_dog - print a dog
 * @d: ptr
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	printf("Name: %s\n", d->name ? d->name : "(nil)");
	printf("Name: %f\n", d->age);
	printf("Owner: %s\n", d->owner ? d->owner : "(nil)");

}
