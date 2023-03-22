#include "main.h"
/**
 * _isalpha - checks for uppercase characters
 * @c: the character to check, variable type char
 * Return: 1 if c is uppercase, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
	{
		return (1);
	}
	else
		return (0);
}
