#include "main.h"

/**
 * print_alphabet - Print alphabet in lowercase without using printf
 */

void print_alphabet(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}	_putchar('\n');
}
