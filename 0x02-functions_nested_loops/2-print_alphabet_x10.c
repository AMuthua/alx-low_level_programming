#include "main.h"

/**
 * print_alphabet_x10 - Prints the aplphabet 10 times in lowercase
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	int ten;
	char a;

	for (ten = 0; ten <= 10; ten++)
	{
		for (a = 'a'; a <= 'z'; a++)
			_putchar(a);
		_putchar('\n');
	}
}
