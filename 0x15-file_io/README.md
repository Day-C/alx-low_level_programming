			===== File handling with C =====

File handling in other words is the same as file manipulation, and to be able to manipulate a file we make use of these I/O system calls(open, close, read and write)
and we also use flags like(O_RDONLY, O_WRONLY, O_RDWR) when opening the files.

to have a good understanding file handling we need to know some concepts like

Fild descriptots: A file descriptor(FD) is a process unique identifier(HOLDER) for a file. File descriptors are typically non_negative numbers.

	---Operations on file descriptors---
	open()
	creat()[5]
	socket()
	accept() (etc)

	---system calls---

open(): the open system call opens a file specified by the pathname.it returns a file descriptor(small non-negative integer.

close(): The close() is used to close a file descriptor, to it no longer refers to any file and can be reused.

read(): "ssize_t read(int fd, void buf[.count], size_t count);" The read() attempts to read up to "count" bytes from a file "fd"

write(): "ssize_t write(int fd, const void buf[.count], size_t count);" The write() writes up to "count" bytes from the buffer "buf" to the file refered to file descriptor "fd".

dprintf(): int dprintf(int fildes, const char *restrict format, ...);": dprintf() is a debug printing function what allows you to print messages to the kenel log, which is useful for debugging purposes.

the process of manipulating files alwasy starts when we open the file. You can then read and write to the file and after that close it.


........TASKS

1). The first task is to write a program that reads a text file and prints it to the standard output
	.prototype: ssize_t read_textfile(const char *filename, size_t letters)
	.Where filename is a pointer to the file and "letters" is the number of characters to be read.

2). The second Task is to write a program that cheks if the file exits and if not creates one and give it the "Read and Write" permitions.
	.Prototype: int create_file(const char *filename, char *text_content);
	.Where "filename" is the name of the file and "text_content" is the text to write into it

3). Third task is to write a program that appends to the end of a file
	.Prototype: int append_text_to_file(const char *filename, char *text_content)
	.Where "text_content" is the text to be appended    

4). Fourth task is to Write a program that copies the contents of one folder into another
	....
