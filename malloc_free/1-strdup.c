#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns pointer to a new copy of a string
 * @str: string to duplicate
 *
 * Return: pointer to the copy, or NULLif anything fails
 */
char *_strdup(char *str)
{
	char *copy;
	unsigned int len, i;

	if (str == NULL)
		return (NULL);

	len = 0;
	while (str[len] != '\0')
		len++;

	copy = malloc(sizeof(char) * (len + 1));
	if (copy == NULL)
		return (NULL);

	i = 0;
	while (i <= len)
	{
		copy[i] = str[i];
		i++;
	}
	return (copy);
}
