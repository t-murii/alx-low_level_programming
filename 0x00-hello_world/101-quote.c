#include <unistd.h>
#include <string.h>
/**
 * main - Prints "and that piece of art is useful" - Dora Korpar, 2015-10-19",
 *                followed by a new line, to standard error.
 *
 * Return: 1.
 */
int main(void)
{
	char message1[] = "and that piece of art is useful";
	char message2[]	= "- Dora Korpar, 2015-10-19\n";

	strcat(message1, message2);

	write(2, message1, sizeof(message1) - 1);
	return (1);
}

