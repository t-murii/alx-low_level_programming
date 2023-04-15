#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creates an array of integers
 *
 * @min: minimum range of values stored
 * @max: the number of elements(maximum range of values stored)
 *
 * Return: pointer to the newly created array
 * NULL if malloc fails
 */

int *array_range(int min, int max)
{
	int *p;
	int size, n;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	p = malloc(sizeof(int) * size);

	if (p == NULL)
		return (NULL);

	for (n = 0; min <= max; n++)
		p[n] = min++;

	return (p);
}
