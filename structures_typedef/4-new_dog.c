#include <stdlib.h>
#include "dog.h"

/**
 * _copy - create copy of a string in new memory allocation
 * @s: string to copy
 * Return: pointer to the copy
 */
char *_copy(char *s)
{
	char *copy;
	unsigned int len, i;

	len = 0;
	while (s[len] != '\0')
		len++;

	copy = malloc(sizeof(char) * (len + 1));
	if (copy == NULL)
		return (NULL);

	i = 0;
	while (i <= len)
	{
		copy[i] = s[i];
		i++;
	}
	return (copy);
}

/**
 * new_dog - create a new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: pointer to new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	if (name == NULL || owner == NULL)
		return (NULL);

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	d->name = _copy(name);
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	d->owner = _copy(owner);
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	d->age = age;
	return (d);
}
