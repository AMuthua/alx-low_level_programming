#include "main.h"

/**
 * _isalpha - checking for uppercase char
 * @c: is the char to be checked
 * Return: 1 if uppercase or lowercase 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
