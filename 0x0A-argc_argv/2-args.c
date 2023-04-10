#include <stdio.h>
/**
 * main - prints the name, followed by a new line
 * @argc: number of command line arguments
 * @argv: array that contains the program line arguments
 * Return: 0 - success
 */
int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
		printf("%s\n", argv[x]);
	return (0);
}
