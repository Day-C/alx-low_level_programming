#include "main.h"
/**
 * cp - function copies content from one file to another
 * @file_from: source file where content will be coped from
 * @file_to: destination file where content will be copied to
 * Return: 1 if successful
 */
int cp(char *file_from, char *file_to)
{
	int cl1, cl2, fd1, fd2, w, r = 0;
	char buf[1024];

	fd1 = open(file_from, O_RDONLY);
	if (fd1 == -1)
		return (-1);
	fd2 = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd2 == -1)
		return (-2);
	r = read(fd1, buf, 1024);
	if (r == -1)
		return (-1);
	w  = write(fd2, buf, r);
	if (w == -1)
		return (-2);
	cl1 = close(fd1);
	cl2 = close(fd2);
	if (cl1 == -1 || cl2 == -1)
		return (-3);
	return (1);
}

/**
 * main - fexecutable function
 * @arc: arcument count
 * @arv: argument vector
 * Return: 0 if successful and 1otherwise
 */
int main(int arc, char **arv)
{
	int res;

	if (arc != 3)
	{
		dprintf(2, "Usage: cp file_form file_to");
		exit(97);
	}
	res = cp(arv[1], arv[2]);

	if (res == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", arv[1]);
		exit(98);
	}
	if (res == -2)
	{
		dprintf(2, "Error: Can't write to %s\n\n", arv[2]);
		exit(99);
	}
	if (res == -3)
	{
		dprintf(2, "Error: Can't close fd file\n");
		exit(100);
	}

	return (0);
}
