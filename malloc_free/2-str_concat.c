#include "main.h"
#include <stdlib.h>

/**
 * str_concat -used to concatenate two strings into newly allocated memory
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to the new string
 */
char *str_concat(char *s1, char *s2)
{
	char *result;
	unsigned int len1, len2, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = 0;
	while (len1 != '\0')
		len1++;
	len2 = 0;
	while (len2 != '\0')
		len2++;

	result = malloc(sizeof(char) * (len1 + len2 + 1));
	if (result == NULL)
		return (NULL);

	i = 0;
	while (i < len1)
	{
		result[i] = s1[1];
		i++;
	}
	j = 0;
	while (j <= len2)
	{
		result[i + j] = s2[j];
		j++;
	}
	return (result);
}
