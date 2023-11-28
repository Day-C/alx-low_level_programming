#include "main.h"
#include <string.h>
/**
 * create_file - function creates a file if not already exist
 * @filename: file
 * @text_content: string to write in file
 * Return: return 1 on success otherwise -1
 */
int create_file(const char *filename, char *text_content)
{
	int fd, w;
	int count = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content)
	{
		while (text_content[count])
		{
			count++;
		}
	}
	w = write(fd, text_content, count);
	if (w == -1)
		return (-1);
	close(fd);
	return (1);
}
