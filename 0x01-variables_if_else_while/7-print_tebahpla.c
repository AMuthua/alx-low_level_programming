#include <stdio.h>

/**
 * main - entry point
 * Return: 0 always (Success)
 */
int main(void)
{
	int n = 122;

	while (n >= 97)
	{
		putchar(n);
		n--;
	}
	return (0);
}
