#include "main.h"
/**
 * read_textfile - function reads texts file and prints to POSIX
 * @filename: pointer to the file
 * @letters: number of characters ro be read
 * Return: retuen number of letters read or 0 if it failes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{

	ssize_t fd;
	ssize_t r;
	ssize_t w;
	char *buf;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);
	r = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, r);

	free(buf);
	close(fd);
	return (w);
}

