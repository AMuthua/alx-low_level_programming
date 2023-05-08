#include "main.h"

/**
 * create_file - creates a file
 * @filename: filename.
 * @text_content: content writed in the file.
 *
 * Return: 1 if it success. -1 if it fails.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int nlttrs;
	int x;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 00600);

	if (fd == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (nlttrs = 0; text_content[nlttrs]; nlttrs++)
		;

	x = write(fd, text_content, nlttrs);

	if (x == -1)
		return (-1);

	close(fd);

	return (1);
}
