#include "main.h"
/**
 * jack_bauer - Prints the minutes in a day
 * from 00:00 to 23:59
 *
 */
void jack_bauer(void)
{
	int h = 0;
	int m = 0;

	while (h < 12)
	{
		while (m < 59)
		{
			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
			_putchar(':');
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
			_putchar('\n');
			m++;
		}
		h++;
	}
}
