#include "main.h"

/**
 * _puts - print a string to stdout
 * by using putchar only
 * @str: function param char array string type
 *
 */

void _puts(char *str)
{
	int count;

	for (count = 0; str[count] != '\0'; count++)
	{
		_putchar(str[count]);
	}
	_putchar('\n');
}
