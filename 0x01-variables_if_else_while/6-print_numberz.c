#include <stdio.h>

/**
 * main - entry point
 * Description - Printing all single digit numbers
 * Return: 0 always (Success)
 */

int main(void)
{
	int i;

	for (i = 0; i <= 10; i++)
	{
		putchar(i);
	}
	putchar('\n');

	return (0);
}
