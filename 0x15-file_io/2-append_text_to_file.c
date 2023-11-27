#include "main.h"

/**
 * append_text_to_file - function adds test to the end of file
 * @filename: file
 * @text_content: sting
 * Return: return  1 on success and -1 otherwise
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd,w;
	int i = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
		return (-1);

	while (text_content[i])
	{
		i++;
	}
	w = write(fd, text_content, i);
	if (w == -1)
		return (-1);
	close(fd);
	return (1);
}
