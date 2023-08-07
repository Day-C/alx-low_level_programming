#include "main.h"
/**
 * read_textfile - function reads a text file and prints its
 * content to POSIX standard output
 * @filename: name of file to be read
 * @letters: number of letters to be printed
 * Return: 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t r, w;
	int fd;
	char *buf;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	r = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, r);

	free(buf);
	close(fd);
	return (w);
}
