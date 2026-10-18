#include "main.h"
#include <stdlib.h>

/**
 * create_array - fxn to create an array of chars and fill it with a char
 * @size: number of elements in thearray
 * @c:char to fill the array with
 *
 * Return: pointer to the array, or null if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	arr = malloc(sizeof(char) * size);
	if (arr == NULL)
		return (NULL);

	i = 0;
	while (i < size)
	{
		arr[i] = c;
		i++;
	}
	return (arr);
}
