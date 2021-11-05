/**
 * _memcpy - copies bytes to memory
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to copy
 * Return: returns resultant copied memory
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
