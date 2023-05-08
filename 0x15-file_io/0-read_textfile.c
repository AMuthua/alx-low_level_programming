#include "main.h"

/**
 * read_textfile - reads a text file and prnts the letters
 * @filename - filename.
 * @letters: numbers of letters printed.
 *
 * Return: numbers of letters printed. It fails, return 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t r, s;
	char *t;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	t = malloc(sizeof(char) * (letters));
	if (!t)
		return (0);

	r = read(fd, t, letters);
	s = write(STDOUT_FILENO, t, r);

	close(fd);

	free(t);

	return (s);
}
