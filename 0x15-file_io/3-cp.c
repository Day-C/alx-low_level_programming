#include "main.h"
/* lenght = function checks the lenght of a string
 * @str: pointer to string
 * Return: strlenght
 */
int lenght(char *str)
{
	int  len = 0;

	while (str[len])
	{
		len++;
	}
	return (len);
}
/**
 * cp - function copies content from one file to another
 * @file_from: source file where content will be coped from
 * @file_to: destination file where content will be copied to
 * Return: 1 if successful
 */
int cp(char *file_from, char *file_to)
{
	int fd1, fd2;
       	
	char buf[1024];

	fd1 = open(file_from, O_RDONLY);
	fd2 = open(file_to, O_CREAT | O_WRONLY);


	read(fd1, buf, 1024);

	write(fd2, buf, 1024);

	close(fd1);
	close(fd2);
	return (1);
}

/**
 * main - fexecutable function
 * @argc: arcument count
 * @argv: argument vector
 * Return: 0 if successful and 1otherwise 
 */ 
int main(int arc, char **arv)
{
	int res;

	if (arc != 3)
	{
		dprintf(2, "Usage: %s file1 and file2", arv[0]);
		exit(1);
	}
	res = cp(arv[1], arv[2]);
	printf("-> %i\n", res);
	return (0);
}
