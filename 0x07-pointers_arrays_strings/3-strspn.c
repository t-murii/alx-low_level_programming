/**
 * _strspn - a function to get the length of a prefix substring.
 *
 * @s: pointer to string input
 * @accept: substring prefix to look for
 *
 * Return: the number of bytes in the initial segment
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, f;

	i = 0; //used as a counter for pointer s
	while (s[i] != '\0')
	{
		j = 0; //counter for the substring prefix
		f = 1; //flag status
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				f = 0; //success
				break;
			}
			j++;
		}
		if (f == 1)
			break;
		i++;
	}

	return (i);
}
