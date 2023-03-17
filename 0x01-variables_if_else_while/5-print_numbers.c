#include <stdio.h>

/**
 * main - entry point
 * Description - Printing single digit numbers of base 10.
 * Return: 0 always (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		printf("%d", i);
	}
	printf("\n");
	return (0);
}
