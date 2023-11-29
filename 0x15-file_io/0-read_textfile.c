#include "main.h"
/**
 * read_textfile - function reads a specified number of characters from a file
 * @filename: name of file
 * @letters: number of characters to read
 * Return: return number of characters read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t r, w;
	char *buf;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	r = read(fd, buf, letters);
	if (r == -1)
		return (0);
	w = write(STDOUT_FILENO, buf, r);
	if (w == -1)
		return (0);
	free(buf);
	close(fd);

	return (w);
}
