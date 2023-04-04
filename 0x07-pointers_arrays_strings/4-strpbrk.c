/**
 * _strpbrk - a function that searches a string for any of a set of byte
 *
 * @s: pointer to input string
 * @accept: pointer to string we searching for in @s
 *
 * Return: pointer to the bytes in @s or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int a, b;

	a = 0;
	while (s[a] != '\0')
	{
		b = 0;
		while (accept[b] != '\0')
		{
			if (s[a] == accept[b])
				return (s + a);
			b++;
		}
		a++;
	}
	return ('\0');
}
