#include <stdio.h>

/**
 * main - entry point
 * Description - print all alphabets except q and e
 * Return: 0 always (Success)
 */
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		if (n == 101 || n == 113)
		{
			n++;
			continue;
		}
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
