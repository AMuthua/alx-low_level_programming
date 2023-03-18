#include <stdio.h>

/**
 * main - entry point
 * Description - Printing differenct combinations of three digits
 * Return: 0 always (Success)
 */
int main(void)
{
	int i;
	int j;
	int k;

	for (i = 0; i < 7; i++)
	{
		for (j = i + 1; j < 8; j++)
		{
			for (k = j + 1; k < 9; k++)
			{
				if (i != j && i != k && j != k)
				{
					putchar('0' + i);
					putchar('0' + j);
					putchar('0' + k);

					if (i != 6 || j != 7 || k != 8)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}

	return (0);
}
