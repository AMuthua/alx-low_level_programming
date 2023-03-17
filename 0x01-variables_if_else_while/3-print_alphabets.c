#include <stdio.h>
/**
 * main - entry point
 * Description - print alphabets in lowercase then uppercase
 * Return: Always 0
 */
int main(void)
{
	int i = 97;
	int j = 65;

	while (i <= 122)
	{
		putchar(i);
	}
	while (j <= 90)
	{
		putchar(j);
	}
	putchar('\n');
	return (0);
}
