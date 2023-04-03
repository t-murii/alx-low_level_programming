/**
 * _memcpy - function that copies memory area
 *
 * @dest: buffer to be copied into
 * @src: the bytes to be copied, variable type char
 * @n: counts the number of bytes of @src
 *
 * Return: Always 0
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		dest[a] = src[a];
	return (dest);
}
