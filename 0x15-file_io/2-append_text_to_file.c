#include "main.h"
/**
 * append_text_to_file - fun adds text to the end of another file
 * @filename: name of file
 * @text_content: text to be appended
 * Return: 1 on success and 1- on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int wr, len = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
		return (-1);
	while (text_content[len])
	{
		len++;
	}
	wr = write(fd, text_content, len);
	if (wr == -1)
		return (-1);
	return (1);
}
