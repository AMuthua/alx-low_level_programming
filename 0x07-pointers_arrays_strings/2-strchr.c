#include "main.h"
/**
 * _strchr - locates charachter in a string
 * @s: string
 * @c: charachter
 * Return: pointer to the first occurence of charachter c
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		else if (*(s + 1) == c)
			return (s + 1);
		s++;
	}
	return (s + 1);
}
