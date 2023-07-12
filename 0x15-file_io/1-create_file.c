#include "main.h"
/**
 * create_file - function create a file
 * @filename: bane of file to be created
 * @text_content: content of the file to be created
 * Return: return 1  on success and -1 otherwise
 */
int create_file(const char *filename, char *text_content)
{
	int i;
	int fd;
	int w;

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC);
	if (fd == -1)
		return (-1);
	i = strlen(text_content);

	w = write(fd, text_content, i);
	if (w == -1)
		return (-1);
	close(fd);
	return (1);
}
