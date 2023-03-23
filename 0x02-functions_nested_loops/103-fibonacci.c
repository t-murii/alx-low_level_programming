#include <stdio.h>

/**
 * main - main block
 * Description: Print the sum of even Fibonacci numbers to a value
 * not exceeding 4,000,000.
 * Return: 0
 */
int main(void)
{
	int a = 1, b = 2, sum = 0;
	int s; /* swapping */

	while (b < 4000000)
	{
		if (b % 2 == 0)
			sum += b;

		s = b;
		b += a;
		a = s;
	}
	printf("%d\n", sum);
	return (0);
}
