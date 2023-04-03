#include "main.h"
/**
 * _strchr - locates charachter in a string
 * @s: string
 * @c: charachter
 * Return: pointer to the first occurence of charachter c
 */
char *_strchr(char *s, char c)
{
	unsigned int x = 0;

	for (;*(s + 1) != '\0'; x++)
		if (*(s + 1) == c)
			return (s + x);
	if (*(s + x) == c)
		return (s + x);
	return ('\0');
}
