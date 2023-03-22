#include "main.h"
/**
 * print_last_digit - Prints the last digit of an int
 * @n: Variable type int
 * Return: The last value of n
 *
 *
 */
int print_last_digit(int n)
{
	int a;

	if (n < 0)
	{
		n = n * -1;
	}

	a = n % 10;
	_putchar(a + '0');

	return (a);
}
