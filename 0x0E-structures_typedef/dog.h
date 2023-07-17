#ifndef DOG_H
#define DOG_H
#include <stdlib.h>
/**
 * struct dog - a dog stuct
 * @name: name
 * @age: age
 * @owner: name of the owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *, char *, float, char *);

#endif
