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
	if (!ptr)
		return (NULL);
	ptr[size] = '\0';

	while (str[i] != '\0')
	{
		ptr[i] = str[i];
		++i;
	}
	return (ptr);
}


/**
 * new_dog - gic constructor
 * @name: name
 * @age: age
 * @owner: name of the owner
 *
 * Return: ptr to the new dog;
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d = NULL;

	d = malloc(sizeof(dog_t));
	if (!d)
		return (NULL);
	d->name = _strdup(name);
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	d->age = age;
	d->owner = _strdup(owner);
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}

	return (d);
}
