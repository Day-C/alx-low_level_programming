#include "main.h"
/**
 * create_file - function create a file and give it a rw permision
 * @filename: name of file to be created
 * @text_content: content to be added to file
 * Return: 1 if successful and -1 otherwise
 */
int create_file(const char *filename, char *text_content)
{
	int fd, w;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	w = write(fd, text_content, strlen(text_content));
	if (w == -1)
		return (-1);

	close(fd);
	return (1);
}
