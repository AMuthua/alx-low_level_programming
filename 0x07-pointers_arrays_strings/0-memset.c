#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s: pointer block of memory to fill
 * @b: constant byte
 * @n: bythes of the memory
 * Return: dest
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		*(s + x) = b;
	}

	return (s);
}
