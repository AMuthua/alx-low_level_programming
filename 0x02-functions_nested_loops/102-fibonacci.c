#include <stdio.h>

/**
 * main - Prints first 50 Fibonacci numbers, starting with 1 and 2,
 *        separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
	int fibonacci[50];

	fibonacci[0] = 1;
	fibonaccy[1] = 2;

	for (int i = 2; i < 50; i++)
	{
		fibonacci[i] = fibonaccy[i - 1] + fibonaccy[i - 2];
	}
	for (int i = 0; i < 50; i++)
	{
		printf("%d", fibonacci[i]);
		if (i < 49)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
