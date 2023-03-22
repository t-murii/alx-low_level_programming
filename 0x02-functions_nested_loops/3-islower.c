#include "main.h"
/**
 * _islower - Checks for lowercase characters only
 *@c: variable to check, variable type char
 * Return: 1 if c is lowercase, 0 if not
 */
int _islower(c)
{
	if (c>= 'a' && c<= 'z')
	{
		return (1);
	}
	else
		return (0);
}

