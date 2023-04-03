/**
 *
 *memset - a function that fills the first n bytes of the memory area pointed to by s with the constant byte b
 *
 * @s : varible type char for the pointer of the block of memory to be filled
 * @b : the variable to be filled in the memory area
 * @n : variable type unsigned int of the number of bytes to be filled
 *
 * Return : the pointer to the memory area @s
 *
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		s[a] = b;

	return (s);
}
