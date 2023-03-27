#include "main.h"

/**
 * print_rev - prints a string in reverse
 *
 * @s: function parameter input type char
 *
 */
void print_rev(char *s)
{
	int n;

	/*finds the length of string*/
	for (n = 0; s[n] != '\0'; n++)
		continue;

	/*print char from the last index as you decrement*/
	for (--n; n >= 0; --n)
		_putchar(s[n]);
	_putchar('\n');
}
