#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - print _putchar without using printf
 *
 * Return: 0
 */

int main(void)
{
	char word[] = "_putchar";
	int n = 0;
	int len = strlen(word);

	while (n < len)
	{
		putchar(word[n]);
		n++;
	}
	putchar('\n');
	return (0);
}

