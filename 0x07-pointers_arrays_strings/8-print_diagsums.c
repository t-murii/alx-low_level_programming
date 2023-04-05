#include <stdio.h>
/**
 * print_diagsums - print the sum of the two
 * diagonals of a square matrix of integers
 * @a: input pointer
 * @size: size of the matrix
 */
void print_diagsums(int *a, int size)
{
	int n, x, y;

	x = 0;
	y = 0;

	for (n = 0; n < (size * size); n++)
	{
		if (n % (size + 1) == 0)
			x += a[n];
		if (n % (size - 1) == 0 && n < size * size - 1 && n != 0)
			y += a[n];
	}
	printf("%d, %d\n", x, y);
}
