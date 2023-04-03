#include "main.h"


/**
 * _memcpy: copies memory area
 * @dest: dest memory area
 * @src: source memory area
 * @n: bytes from memory area to copy
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		dest[x] = src [x];
	}

	return (dest);
}
