#include "dog.h"

/**
 * _strlen - strlen copy
 * @str: str
 *
 * Return: size
 */
int _strlen(char *str)
{
	if (*str == 0)
		return (0);
	return (1 + _strlen(str + 1));
}
/**
 * _strdup - strdup copy
 * @str: str
 *
 * Return: ptr
 */
char *_strdup(char *str)
{
	int size = 0;
	char *ptr = 0;
	int i = 0;

	if (str == NULL)
		return (NULL);
	size = _strlen(str);
	ptr = malloc(sizeof(char) * (size + 1));
	ptr[size] = '\0';

	while (str[i] != '\0')
	{
		ptr[i] = str[i];
		++i;
	}
	return (ptr);
}


/**
 * init_dog - gic constructor
 * @d: ptr
 * @name: name
 * @age: age
 * @owner: name of the owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = _strdup(name);
	d->age = age;
	d->owner = _strdup(owner);
}
