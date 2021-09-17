#include "main.h"

/**
 * read_textfile - reads a file and prints it to the
 * POSIX standard output.
 * @filename: the name of the file.
 * @letters: the number of characters to be read from the file
 *
 * Return: the number of characters read from file.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	int r, w;
	char *buf;

	if (!filename)
		return (0);


	buf = malloc(sizeof(char) * letters);
	if (!buf)
		return (0);

	fd = open(filename, O_RDONLY);
	r = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, r);

	if (fd == -1 || r == -1 || w == -1 || w != r)
	{
		free(buf);
		return (0);
	}

	free(buf);
	close(fd);

	return (w);
}

