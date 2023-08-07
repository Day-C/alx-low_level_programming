		___ file handling in c ___

file handling is all about creating, opening, reading, writing and closing filesIn the followinf programs we wiull be hg a deeper understanding on this topic.


0. write a function that reads a test file and prints it to the POSIX standard output
	Prototype: ssize_t read_textfile(const char *filename, size_t 		letters);
	where letters is the number of letters it should read and prin		t
	returns the actual number of letters it could read and print
	if the file can not be opened or read, return 0


1. create a function tht creates a file
	Prototype: int create_file(const char *filename, char *text_content);
	where filename is the name of the file to create and 
	text_content is a NULL terminated string to write to the file
	Returns: 1 on success, -1 on failure (file can not be created
	, file can not be written, write “fails”, etc…)
	The created file must have those permissions: rw----- if the 
	file already exist


2. write a function that appends a texts at the end of a file.
	Prototype: int append_text_to_file(const char *filename, char *text_content);
	where filename is the name of the file and text_content is 
	the NULL terminated string to add at the end of the file
	Return: 1 on success and -1 on failure


3. write a function that copies the content of a file to another file

4. write a program that displays the information contained in the ELF header at the start of the EFL file
