#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 * text: The variable in which the result of the two strings is placed
 *
 * Return: a pointer to a newly allocated space in memory which
 * contains the contents of s1, followed by the contents of s2,
 * and null terminated.
 * returns NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	int a, b, lens1, lens2, len;
	char *text;

	lens1 = lens2 = 0;

	if (s1 != NULL)
	{
		a = 0;
		while (s1[a++] != '\0')
			lens1++;
	}

	if (s2 != NULL)
	{
		a = 0;
		while (s2[a++] != '\0')
			lens2++;
	}

	len = lens1 + lens2;
	text = (char *)malloc(sizeof(char) * (len + 1));
	if (text == NULL)
		return (NULL);

	for (a = 0; a < lens1; a++)
		result[i] = s1[i];
	for (b = 0; b < lens2; b++, a++)
		text[a] = s2[b];
	text[len] = '\0';

	return (text);
}
