#include "main.h"
/**
 * append_text_to_file - fun adds text to the end of another file
 * @filename: name of file
 * @text_content: text to be appended
 * REturn: 1 on success and 1- on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int w, len;

	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
		return (-1);
	len = strlen(text_content);
	w = write(fd, text_content, len);
	return (1);
}
