#include "main.h"
#include <stdlib.h>

/**
 * create_array - function to create array of chracters
 * and initializes it with a specific char.
 * @size: the size of the array
 * @c: initial value of char[0]
 *
 * Return: a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	arr = (char *)malloc(sizeof(char) * size);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = c;

	return (arr);
}
