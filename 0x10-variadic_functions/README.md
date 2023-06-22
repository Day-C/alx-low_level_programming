		__________________ Variadic Functions ____________
0. The programm returns the sum of all its parameters.

	Prototype: int sum_them_all(const unsigned int n, ...);
	If n == 0, return 0.

1. the programm prints numbers followed by a new line

2. write a programm that prints a string followed by a new line

3. Write a programm that peints anything
	Prototype: void print_all(const char * const format, ...);
	where format is a list of types of arguments passed to the function
	c: char
	i: integer
	f: float
	s: char * (if the string is NULL, print (nil) instead
	any other char should be ignored
