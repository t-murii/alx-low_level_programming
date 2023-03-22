#include "main.h"
/**
 * _isalpha: checks for uppercase characters
 *@c: the character to check, variable type char
 * Return: 1 if c is uppercase, 0 otherwise
 */
int _isalpha(int c)
{
	if (c>= 'A' && c<= 'Z')
	{
		return (1);
	}
	else
		return (0);
}	
