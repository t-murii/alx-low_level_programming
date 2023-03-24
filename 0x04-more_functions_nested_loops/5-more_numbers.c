#include "main.h"

/**
 * more_numbers - print 10 times the numbers from 0 to 14
 * Description: Can only use _putchar 3 times
 */
void more_numbers(void)
{
	int n, c;

	n = 0;
	while (n < 10)
	{
		c = 0;
		while (c < 15)
		{
			if (c > 9)
				_putchar(c / 10 + '0');

			_putchar(c % 10 + '0');
			c++;
		}
		n++;
		_putchar('\n');
	}
}
