#include "main.h"
/**
 * print_alphabet_x10 - Prints the alphabet 10 times in lower case
 * follow by a new line
 */
void print_alphabet_x10(void)
{
	char c;
	int n;

	n = 0;
	while (n < 10)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		n++;
	}

}
