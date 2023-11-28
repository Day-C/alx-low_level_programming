#include "main.h"
#include "stdlib.h"

/**
 * cp - fuunction copies files content to another file
 * @file_from: copy from
 * @file_to: copy to
 * Return: return 0 is successful
 */
int cp(char *file_from, char *file_to)
{
	int fd_1, fd_2, r, w, cl_1, cl_2;
	char buf[10024];

	if (!file_from)
		return (98);
	fd_1 = open(file_from, O_RDONLY);
	if (fd_1 == -1)
		return (98);

	fd_2 = open(file_to, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd_2 == -1)
		return (99);

	r = read(fd_1, buf, 10024);

	if (r == -1)
		return (98);


	w = write(fd_2, buf, r);
	if (w == -1)
		return (99);

	cl_1 = close(fd_1);
	cl_2 = close(fd_2);
	if (cl_1 == -1)
	{
		return (100);
	}
	if (cl_2 == -1)
	{
		return (100);
	}
	return (0);
}

/**
 * main - main function
 * @argc: argument count
 * @argv: argument vector
 * Return: return 0 fo success
 */
int main(int argc, char **argv)
{
	int res;

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		return (-1);
	}

	res = cp(argv[1], argv[2]);

	if (res == 98)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	if (res == 99)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	if (res == 100)
	{
		dprintf(2, "Error: Can't close fd %d\n", res);
		exit(100);
	}

	return (0);
}


