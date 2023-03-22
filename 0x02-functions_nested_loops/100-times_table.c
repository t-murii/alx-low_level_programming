#include "main.h"
/**
 * print_times_table - Print the times table to n, starting with 0
 * @n: The variable to check for times table
 * Return: 0
 */
void print_times_table(int n)
{
        int a = 0; /* factor 1 */
        int b; /* factor 2  */
        int c; /* multiplied value */

	if (n > 15 ||  n < 0)
		return;
	while (a <= n)
	{
		for (b = 0; b <= n; b++)
		{
			c = a * b;
			if (c > 99)
			{
				_putchar(c / 100 + '0');
				_putchar((c / 10 % 10) + '0');
				_putchar(c % 10 + '0');
			}
			else if (c > 9)
			{
				_putchar(' ');
				_putchar(c / 10 + '0');
				_putchar(c % 10 + '0');
			}
			else if (b != 0)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(c + '0');
			}
			else
				_putchar(c + '0');

			if (b != n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
		a++;
	}
}
