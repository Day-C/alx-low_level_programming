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
	ssize_t n;
	int fd, i;
	char buf[1024];

	fd = open(filename, O_RDONLY);
	n = read(fd, buf, letters);
	i = 0;
	while (buf[i])
	{
		write(1, &buf[i], 1);
		i++;
	}
	close(fd);
	return (n);
}
