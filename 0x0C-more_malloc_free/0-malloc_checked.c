#include "main.h"

/**
 * malloc_checked - checks if malloc works
 * if malloc fails cause normal process termination returning 98
 *
 * @b: allocated memory
 *
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *n;

	n = malloc(b);
	if (n == NULL)
		exit(98);
	return (n);

}
