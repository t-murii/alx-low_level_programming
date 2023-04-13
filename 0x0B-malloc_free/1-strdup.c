#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains duplicate of the string given as a parameter.
 * @str: the string to be duplicated
 *
 * Return: a pointer to the duplicated string.
 * NULL if str == NULL
 */
char *_strdup(char *str)
{
	char *copy;
	int i, n = 0;

	if (str == NULL)
		return (NULL);

	while (str[n] != '\0')
		len++;

	copy = (char *)malloc((sizeof(char) * n) + 1);

	for (i = 0; i < n; i++)
		copy[i] = str[i];
	copy[n] = '\0';

	return (copy);
}
