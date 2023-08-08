#include "main.h"
/**
 * append_text_to_file - function appends a text to a file
 * @filename: name of file to be used
 * @text_content: text to be appended
 * Return: 1 if successful and -1 otherwise
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w, len;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
		len = 0;
		while (text_content[len])
		{
			len++;
		}

		w = write(fd, text_content, len);
		if (w == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
