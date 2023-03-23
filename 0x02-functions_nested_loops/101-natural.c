#include <stdio.h>

/**
 * main - Main block
 * Description: Print the sum of all multiples of 3 or 5 below 1024.
 * Return: 0 Always
 */
int main(void)
{
	int i = 1;
	int total = 0;

	while (i < 1024)
	{
		if (i % 3 == 0 || i % 5 == 0)
			total += i;

		i++;
	}
	printf("%d\n", total);

	return (0);
}
